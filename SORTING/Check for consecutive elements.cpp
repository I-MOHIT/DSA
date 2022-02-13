// Given an array of positive integers A, check and return whether the array elements are consecutive or not.

// NOTE: Solve it with O(1) extra space.



// 1 <= length of the array <= 100000
// 1 <= A[i] <= 10^9 



int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
        if(A[i+1]-A[i]>1){
            return 0;
        }
    }
    return 1;
}