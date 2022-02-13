You are given a string A. Find the number of substrings that start and end with 'a'.

NOTE - String will have only lowercase English letters.



1 <= |A| <= 10^5




int Solution::solve(string A) {
    int count=0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='a'){
            count++;
        }
    }
    long long int temp=count*(count+1);
    temp=temp/2;
    return temp;
}