// Given an integer A.
// Two numbers X and Y are defined as follows:

// X is the greatest number smaller than A such that XOR sum of X and A is the same as the sum of X and A.
// Y is the smallest number greater than A such that XOR sum of Y and A is the same as the sum of Y and A.
// Find and return the XOR of X and Y.
  
// 1 <= A <= 10^9

int Solution::solve(int A) {
    if(A==1){
        return 2;
    }
    int temp=0;
    for(int i=0;i<32;i++){
        if(A&(1<<i)){
            temp=i;
        }
    }
    int dup=0;
    for(int i=temp;i>=0;i--){
        if(A&(1<<i)){
            continue;
        }else{
            dup=dup+(1<<i);
        }
    }
    /*cout<<temp;
    cout<<dup;*/
    int ans=0;
    ans=ans+(1<<(temp+1));
    ans=ans+dup;
    return ans;
}
