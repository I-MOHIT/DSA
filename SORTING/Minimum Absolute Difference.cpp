// Given an array of integers A, find and return the minimum value of | A [ i ] - A [ j ] | where i != j and |x| denotes the absolute value of x.



// 1 <= length of the array <= 100000

// -10^9 <= A[i] <= 10^9 



int Solution::solve(vector<int> &A) {
    int mindiff=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
        int temp=A[i+1]-A[i];
        if(temp<mindiff){
            mindiff=temp;
        }
    }
    return mindiff;
}