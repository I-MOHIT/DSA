#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr,int start,int end,int ans){
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==ans){
      return mid;
    }else if(arr[mid]>ans){
      high=mid-1;
    }else{
      low=mid+1;
    }
  }
  return -1;
}
