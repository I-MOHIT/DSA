#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

int findminindex(int arr[], int start){
    int minindex=start;
    start++;
    for(int i=start;i<arr.size();i++){
        if(arr[i]<arr[minindex]){
            minindex=i;
        }
        start++;
    }
    return minindex;
}

void selectionsort(int arr[]){
    for(int i=0;i<arr.size();i++){
        int minimumindex=findminindex(arr,i);
        if(i!=minimumindex){
            swap(&arr[i],&arr[minimumindex]);
        }
    }
}