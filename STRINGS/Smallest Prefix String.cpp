// Given 2 strings A and B of size N and M respectively consisting of lowercase alphabets, find the lexicographically smallest string that can be formed by concatenating non empty prefixes of A and B (in that order).

// Note: The answer string has to start with a non empty prefix of string A followed by a non empty prefix of string B.



// 1 <= N, M <= 100000




string Solution::smallestPrefix(string A, string B) {
    string s="";
    s=s+A[0];
    int i=1;
    while(i<A.length()&&A[i]<B[0]){
        s=s+A[i];
        i++;
    }
    s=s+B[0];
    return s;
}