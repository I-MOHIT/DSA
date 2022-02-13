// Given an array of integers A of size N. Find the longest subsequence of A which is odd-even.

// A subsequence is said to odd-even in the following cases:

//     The first element of the subsequence is odd, second element is even, third element is odd and so on.

//     The first element of the subsequence is even, second element is odd, third element is even and so on.

// Return the maximum possible length of odd-even subsequence.

// Note: An array B is a subsequence of an array A if B can be obtained from A by deletion of several (possibly, zero or all) elements.


// 1 <= N <= 100000
// 1 <= A[i] <= 10^9 


int Solution::solve(vector<int> &A) {
    int count=0;
    bool flag_odd=false;
    if(A[0]%2!=0){
        flag_odd=true;
    }
    count++;
    for(int i=1;i<A.size();i++){
        if(flag_odd==true&&A[i]%2==0){
            count++;
            flag_odd=false;
        }else if(flag_odd==false&&A[i]%2!=0){
            count++;
            flag_odd=true;
        }
    }
    return count;
}