// Given a string A of size N consisting of lowercase alphabets, find if it is possible to make the given string a palindrome by changing exactly one of its character.



// 1 <= N <= 10^5 


string Solution::solve(string A) {
    int count=0;
    for(int i=0;i<A.length()/2;i++){
        if(A[i]!=A[A.length()-1-i]){
            count++;
        }
    }
    if(count==1){
        return "YES";
    }else if(count==0&&A.length()%2!=0){
        return "YES";
    }
    return "NO";
}