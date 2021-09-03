// Given an integer array A of size N. You have to delete one element such that the GCD(Greatest common divisor) of the remaining array is maximum.

// Find the maximum value of GCD.
  
// 2 <= N <= 10^5
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
    if(A.size()==2){
        return max(A[0],A[1]);
    }
    int n=A.size();
    int prefixgcd[n+2];
    int suffixgcd[n+2];
    prefixgcd[1]=A[0];
    suffixgcd[n]=A[n-1];
    for(int i=2;i<=n;i++){
        prefixgcd[i]=gcd(prefixgcd[i-1],A[i-1]);
    }
    for(int i=n-1;i>=1;i--){
        suffixgcd[i]=gcd(suffixgcd[i+1],A[i-1]);
    }
    int ans=max(suffixgcd[2],prefixgcd[n-1]);
    for(int i=2;i<n;i++){
        ans=max(ans,gcd(prefixgcd[i-1],suffixgcd[i+1]));
    }
    return ans;
}
