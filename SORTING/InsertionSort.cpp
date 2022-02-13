#include<bits/stdc++.h>
using namespace std;

void insertionsort(int arr[], int n){
    int i,j,key;
    for(i=1;i<n;i++){
        key=arr[i];                 //current element which we will try to pick out and put it to the left if it is smaller than its predecessors
        j=i-1;
        while(j>=0&&arr[j]>key){    //if the current index is not negative and the predecessors are greater than the key, we shift the predecessors by one position to the right and look for the next left predecessor
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;               //When all predecessors which were larger than the current element were looked at we place the current selected element at the right position
    }
}