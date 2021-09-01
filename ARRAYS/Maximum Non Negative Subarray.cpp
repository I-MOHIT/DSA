// Given an array of integers, A of length N, find out the maximum sum sub-array of non negative numbers from A.

// The sub-array should be contiguous i.e., a sub-array created by choosing the second and fourth element and skipping the third element is invalid.

// Maximum sub-array is defined in terms of the sum of the elements in the sub-array.

// Find and return the required subarray.
  
// 1. If there is a tie, then compare with segment's length and return segment which has maximum length.
// 2. If there is still a tie, then return the segment with minimum starting index.

// 1 <= N <= 1e5
// -INT_MAX < A[i] <= INT_MAX

vector<int> Solution::maxset(vector<int> &A) {
    vector<int> ans;
    int curr_length=0;
    int max_length=0;
    int start=0;
    int end=0;
    int temp=0;
    int max_start=-1;
    int max_end=-1;
    long long int max_so_far=INT_MIN;
    long long int max_uptil_now=0;
    for(int i=0;i<A.size();i++){
        if(A[i]>=0){
            max_uptil_now=max_uptil_now+A[i];
            if(max_so_far<max_uptil_now){
                max_so_far=max_uptil_now;
                end=i;
                start=temp;
                curr_length=end-start+1;
                max_end=end;
                max_start=start;
                max_length=max_end-max_start+1;
            }else if(max_so_far==max_uptil_now){
                max_so_far=max_uptil_now;
                end=i;
                start=temp;
                curr_length=end-start+1;
                if(curr_length>max_length){
                    max_length=curr_length;
                    max_start=start;
                    max_end=end;
                }
            }
        }else{
            max_uptil_now=0;
            temp=i+1;
        }
    }
    if(max_start>=0){
        for(int i=max_start;i<=max_end;i++){
            ans.push_back(A[i]);
        }
    }
    return ans;
}
