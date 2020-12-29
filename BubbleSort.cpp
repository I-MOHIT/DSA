#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp){        //swapping references or memory address of these variables
    int temp=*yp;
    *yp=*xp;
    *xp=temp;
}

void bubblesort(int arr[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){            //sorting in ascending order
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}