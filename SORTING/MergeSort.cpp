#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1];                  //Temporary Arrays to store the elements and then overwrite in the original array.
    int R[n2];

    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    
    i=0;
    j=0;
    k=l;

    while(i<n1&&j<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];        //Populating the lower current element of the two subarrays in the original array
            i++;
        }else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){                //if any elements of the two subarrays are remaining then we add those two
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(arr, l, m);       //Call mergesort on the two halves and then merge the two subarrays, this happens recursively
        mergesort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}