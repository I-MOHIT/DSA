// Given two binary strings A and B, count how many cyclic permutations of B when taken XOR with A give 0.

// NOTE: If there is a string, S0, S1, ... Sn-1 , then it is a cyclic permutation is of the form Sk, Sk+1, ... Sn-1, S0, S1, ... Sk-1 where k can be any integer from 0 to N-1.



// 1 ≤ length(A) = length(B) ≤ 10^5



int Solution::solve(string A, string B) {
    string C=A;
    C=C+'$';
    C=C+B;
    C=C+B;
    int Z[C.length()];
    Z[0]=0;
    int left=0;
    int right=0;
    for(int k=1;k<C.length();k++){
        if(k>right){
            left=right=k;
            while(right<C.length()&&C[right]==C[right-left]){
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
                while(right<C.length()&&C[right]==C[right-left]){
                    right++;
                }
                Z[k]=right-left;
                right--;
            }
        }
    }
    int count=0;
    for(int i=1;i<C.length()-A.length();i++){
        if(Z[i]==A.length()){
            count++;
        }
    }
    return count;
}