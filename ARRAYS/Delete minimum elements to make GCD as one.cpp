// Given an integer array A of size N.
// Find the minimum number of elements that need to be removed such that the GCD of the resulting array becomes 1.

// If not possible then return -1.
  
// 1 <= N <= 100000
// 1 <= A[i] <= 10^9

int gcd(int a, int b){
    int x=max(a,b);
    int y=min(a,b);
    while(y>0){
        x=x%y;
        int temp=x;
        x=y;
        y=temp;
    }
    return x;
}

int Solution::solve(vector<int> &A) {
    int ans=A[0];
    for(int i=1;i<A.size();i++){
        ans=gcd(ans,A[i]);
        if(ans==1){
            return 0;
        }
    }
    return -1;
}
