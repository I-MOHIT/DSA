// Given an array of positive integers A and an integer B, find and return first continuous subarray which adds to B.

// If the answer does not exist return an array with a single element "-1".

// First sub-array means the sub-array for which starting index in minimum.


// 1 <= length of the array <= 100000
// 1 <= A[i] <= 10^9
// 1 <= B <= 10^9



vector<int> Solution::solve(vector<int> &A, int B) {
    int i=0;
    int j=0;
    int n=A.size();
    int sum=A[i];
    bool found=false;
    while(j<n){
        if(sum==B){
            found=true;
            break;
        }else if(sum<B){
            j++;
            if(j<n){
                sum=sum+A[j];
            }else{
                break;
            }
        }else{
            sum=sum-A[i];
            i++;
        }
    }
    vector<int> ans;
    if(found==true){
        for(int k=i;k<=j;k++){
            ans.push_back(A[k]);
        }
    }else{
        ans.push_back(-1);
    }
    return ans;
}