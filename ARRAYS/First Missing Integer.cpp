// Given an unsorted integer array A of size N. Find the first missing positive integer.
  
// 1 <= N <= 1000000

// -10^9 <= A[i] <= 10^9

int Solution::firstMissingPositive(vector<int> &A) {
    bool flag=false;
    for(int i=0;i<A.size();i++){
        if(A[i]==1){
            flag=true;
            break;
        }
    }
    if(flag==false){
        return 1;
    }
    int n=A.size();
    for(int i=0;i<A.size();i++){
        if(A[i]<=0||A[i]>n){
            A[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        A[(A[i]-1)%n]=A[(A[i]-1)%n]+n;
    }
    for(int i=0;i<n;i++){
        if(A[i]<=n){
            return i+1;
        }
    }
    return n+1;
}
