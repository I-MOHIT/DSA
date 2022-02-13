// Given a sorted array of integers A where every element appears twice except for one element which appears once, find and return this single element that appears only once.

// NOTE: Solve this in O(log(N)) time.

// 1 <= |A| <= 100000

// 1 <= A[i] <= 10^9

int Solution::solve(vector<int> &A) {
    int n=A.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]!=A[(mid-1+n)%n]&&A[mid]!=A[(mid+1)%n]){
            return A[mid];
        }else if(A[mid]==A[(mid-1+n)%n]&&A[mid]!=A[(mid+1)%n]){
            int left_length=mid-low+1;
            int right_length=high-mid;
            if(left_length%2!=0){
                high=mid;
            }else{
                low=mid+1;
            }
        }else if(A[mid]!=A[(mid-1+n)%n]&&A[mid]==A[(mid+1)%n]){
            int left_length=mid-low;
            int right_length=high-mid+1;
            if(left_length%2!=0){
                high=mid-1;
            }else{
                low=mid;
            }
        }
    }
    return -1;
}