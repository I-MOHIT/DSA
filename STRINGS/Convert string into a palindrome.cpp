// Given a string A of size N consisting only of lowercase alphabets. The only operation allowed is to insert characters in the beginning of the string.

// Find and return how many minimum characters are needed to be inserted to make the string a palindrome string.



// 1 <= N <= 10^6



int Solution::solve(string A) {
    string B=A;
    B=B+'$';
    for(int i=0;i<A.length();i++){
        B=B+A[A.length()-1-i];
    }
    int lps[B.length()];
    lps[0]=0;
    int j=0;
    int i=1;
    while(i<B.length()){
        if(B[i]==B[j]){
            j++;
            lps[i]=j;
            i++;
        }else{
            if(j!=0){
                j=lps[j-1];
            }else{
                lps[i]=0;
                i++;
            }
        }
    }
    return A.length()-lps[B.length()-1];
}