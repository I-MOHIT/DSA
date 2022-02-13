// Given a string A of length N consisting of lowercase alphabets. Find the period of the string.

// Period of the string is the minimum value of k (k >= 1), that satisfies A[i] = A[i % k] for all valid i.



// 1 <= N <= 10^6



int Solution::solve(string A) {
    int Z[A.length()];
    int left=0;
    int right=0;
    for(int k=1;k<A.length();k++){
        if(k>right){
            left=right=k;
            while(right<A.length()&&A[right]==A[right-left]){
                right++;
            }
            Z[k]=right-left;
            right--;
        }else{
            int k1=k-left;
            if(Z[k1]<right-k+1){
                Z[k]=Z[k1];
            }else{
                left=k;
                while(right<A.length()&&A[right]==A[right-left]){
                    right++;
                }
                Z[k]=right-left;
                right--;
            }
        }
    }
    for(int i=1;i<A.length();i++){
        if(Z[i]+i==A.length()){
            return i;
        }
    }
    return A.length();
}