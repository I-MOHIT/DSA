// Given an integer array A of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.

// 2 <= length of the array <= 100000
// 0 <= A[i] <= 10^9

int Solution::findMinXor(vector<int> &A) {
    int n=A.size();
    int ans=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<n-1;i++){
        int temp=A[i]^A[i+1];
        if(temp<ans){
            ans=temp;
        }
    }
    return ans;
}
