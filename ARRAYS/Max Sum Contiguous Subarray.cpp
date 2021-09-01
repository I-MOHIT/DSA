//Find the contiguous subarray within an array, A of length N which has the largest sum.

// 1 <= N <= 1e6
// -1000 <= A[i] <= 1000

int Solution::maxSubArray(const vector<int> &A) {
    int start=0;
    int end=0;
    int temp=0;
    int max_so_far=INT_MIN;
    int max_ending_here=0;
    for(int i=0;i<A.size();i++){
        max_ending_here=max_ending_here+A[i];
        if(max_so_far<max_ending_here){
            max_so_far=max_ending_here;
            start=temp;
            end=i;
        }
        if(max_ending_here<0){
            max_ending_here=0;
            temp=i+1;
        }
    }
    return max_so_far;
}
