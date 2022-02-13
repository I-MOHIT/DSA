// Given a string A of lowercase English alphabets. Rearrange the characters of the given string A such that there is no boring substring in A.

// A boring substring has the following properties:

//     1) Its length is 2.
//     2) Both the characters are consecutive. If the first character is C then the next character can be either (C+1) or (C-1).

// Return 1 if it possible to rearrange the letters of A such that there are no boring substring in A, else return 0.



// 1 <= |A| <= 10^5



int Solution::solve(string A) {
    int min_s1=INT_MAX;
    int max_s1=INT_MIN;
    int min_s2=INT_MAX;
    int max_s2=INT_MIN;
    for(int i=0;i<A.length();i++){
        int value=A[i]-'a';
        if(value%2==0){
            min_s1=min(min_s1,value);
            max_s1=max(max_s1,value);
        }else{
            min_s2=min(min_s2,value);
            max_s2=max(max_s2,value);
        }
    }
    if(abs(min_s1-max_s2)==1&&abs(min_s2-max_s1)==1){
        return 0;
    }
    return 1;
}