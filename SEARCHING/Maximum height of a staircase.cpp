// Given an integer A representing the number of square blocks. The height of each square block is 1. The task is to create a staircase of max height using these blocks.

// The first stair would require only one block, the second stair would require two blocks and so on.

// Find and return the maximum height of the staircase.


// 0 <= A <= 10^9

int Solution::solve(int A) {
    int low=1;
    int high=A;
    long long int ans=0;
    while(low<=high){
        long long int mid=low+(high-low)/2;
        long long int blocks=mid*(mid+1)/2;
        if(blocks==A){
            return mid;
        }else if(blocks<A){
            ans=max(mid,ans);
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}