// Given an integer array A of size N. In one second you can increase the value of one element by 1.

// Find the minimum time in seconds to make all elements of the array equal.



// 1 <= N <= 1000000

// 1 <= A[i] <= 1000


int Solution::solve(vector<int> &A) {
    int sum=A[0];
    int maxvalue=A[0];
    for(int i=1;i<A.size();i++){
        sum=sum+A[i];
        if(A[i]>maxvalue){
            maxvalue=A[i];
        }
    }
    return maxvalue*(A.size())-sum;
}