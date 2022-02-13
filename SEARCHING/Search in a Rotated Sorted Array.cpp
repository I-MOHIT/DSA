// Given a sorted array of integers A of size N and an integer B.

// array A is rotated at some pivot unknown to you beforehand.

// (i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2 ).

// You are given a target value B to search. If found in the array, return its index, otherwise return -1.

// You may assume no duplicate exists in the array.

// NOTE: Solve this in O(log(N)) time.


// 1 <= N <= 1000000

// 1 <= A[i] <= 10^9

// all elements in A are disitinct.

int Solution::search(const vector<int> &A, int B) {
    int pivot;
    int low=0;
    int n=A.size();
    int high=n-1;
    while(low<=high){
        if(A[low]<=A[high]){
            pivot=low;
            break;
        }
        int mid=low+(high-low)/2;
        int prev=(mid-1+n)%n;
        int next=(mid+1)%n;
        if(A[mid]<=A[prev]&&A[mid]<=A[next]){
            pivot=mid;
            break;
        }else if(A[mid]<=A[high]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    int rotated_low=pivot;
    int rotated_high=pivot+n-1;
    while(rotated_low<=rotated_high){
        int rotated_mid=rotated_low+(rotated_high-rotated_low)/2;
        if(A[rotated_mid%n]==B){
            return rotated_mid%n;
        }else if(A[rotated_mid%n]>B){
            rotated_high=rotated_mid-1;
        }else{
            rotated_low=rotated_mid+1;
        }
    }
    return -1;
}