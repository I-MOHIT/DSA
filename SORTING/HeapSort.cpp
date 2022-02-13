#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){
    int temp=*xp;
    *xp=*yp;
    *yp=temp;
}

void heapify(int arr[], int n, int i){
    int largest=i;                      //Making the root as the largest element
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && arr[l]>arr[largest]){
        largest=l;
    }

    if(r<n && arr[r]>arr[largest]){
        largest=r;
    }

    if(largest!=i){
        swap(&arr[i],&arr[largest]);    //If the root is not the largest element
        heapify(arr,n,largest);         //Calling heapify on the array recursively
    }
}

void heapsort(int arr[], int n){
    for(int i=n/2-1;i>0;i--){           //Calling heapify on the left subtree
        heapify(arr,n,i);
    }

    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);          //Heapifying the left subtree by making the largest element as the root
        heapify(arr,i,0);
    }
}