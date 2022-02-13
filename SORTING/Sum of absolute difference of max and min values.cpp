// Given an array of integers A of size N where N is even.

// Divide the array into two subsets such that

// 1.Length of both subset is equal.
// 2.Each element of A occurs in exactly one of these subset.

// Magic number = sum of absolute difference of corresponding elements of subset.

// Return an array B of size 2, where B[0] = maximum possible value of Magic number modulo 10^9 + 7, B[1] = minimum possible value of a Magic number modulo 10^9 + 7.



// Problem Constraints

// 1 <= N <= 10^5

// -10^9 <= A[i] <= 10^9

// N%2 = 0



vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    long long int maxvalue=0;
    long long int minvalue=0;
    for(int i=0;i<n/2;i++){
        maxvalue=maxvalue+abs(A[n-1-i]-A[i]);
    }
    for(int i=0;i<n;i=i+2){
        minvalue=minvalue+abs(A[i+1]-A[i]);
    }
    int a=maxvalue%1000000007;
    int b=minvalue%1000000007;
    vector<int> ans;
    ans.push_back(a);
    ans.push_back(b);
    return ans;
}