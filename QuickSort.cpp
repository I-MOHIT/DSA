#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp=*yp;
    *yp=*xp;
    *xp=temp;
}

int partition(int arr[], int l, int r){
    int pivot=arr[r];                       //using last element as pivot

    int i=l-1;

    for(int j=l;j<r;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[r]);                //Swap the pivot element so that now the elements to the left of pivot are less than pivot and elements to the right of pivot are greater than pivot
    return (i+1);
}

void quicksort(int arr[], int l, int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}