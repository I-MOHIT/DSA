#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int l, int r, int x){
    if(r>=l){
        int mid=(l+r)/2;
        if(arr[mid]==x){                        //if the middle element is the element which we are looking for
            return mid;
        }else if(x>arr[mid]){                   //if the element we are looking for is greater than the middle element, then the element can exist in the right half
            binarysearch(arr, mid+1, r, x);
        }else{
            binarysearch(arr,l,mid-1,x);      //if the element we are looking for is less than the middle element, then it is in the left half
        }
    }
    return -1;                                  //if the element was not found in the array
}
