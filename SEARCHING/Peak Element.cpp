// Given an array of integers A, find and return the peak element in it. An array element is peak if it is NOT smaller than its neighbors.

// For corner elements, we need to consider only one neighbor. We ensure that answer will be unique.

// NOTE: Solve this in O(log(N)) time.

// 1 <= |A| <= 100000

// 1 <= A[i] <= 10^9 

int Solution::solve(vector<int> &A) {
    int n=A.size();
    if(n==1){
        return A[0];
    }
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid==0&&A[mid]>=A[mid+1]){
            return A[mid];
        }else if(mid==n-1&&A[mid]>=A[mid-1]){
            return A[mid];
        }else if(A[mid]>=A[(mid-1)]&&A[mid]>=A[(mid+1)]){
            return A[mid];
        }else if(A[mid-1]>=A[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}