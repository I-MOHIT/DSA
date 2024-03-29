// Given a sorted array A of size N and a target value B, return the index (0-based indexing) if the target is found.
// If not, return the index where it would be if it were inserted in order.

// NOTE: There are no duplicates in the array. Solve this in O(log(N)) time.


// 1 <= N <= 10^6

int Solution::searchInsert(vector<int> &A, int B) {
    int n=A.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-mid)/2;
        if(A[mid]==B){
            return mid;
        }else if(A[mid]>B){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return low;
}