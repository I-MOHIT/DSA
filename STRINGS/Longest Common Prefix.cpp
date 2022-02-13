// Given an array of strings A, you need to find the longest string S which is the prefix of ALL the strings in the array.



// 0 <= sum of length of all strings <= 1000000



string Solution::longestCommonPrefix(vector<string> &A) {
    int min_length=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(A[i].length()<min_length){
            min_length=A[i].length();
        }
    }
    string s="";
    bool tba=true;
    for(int i=0;i<min_length;i++){
        for(int j=1;j<A.size();j++){
            if(A[j][i]!=A[j-1][i]){
                tba=false;
                break;
            }
        }
        if(tba==true){
            s=s+A[0][i];
        }else{
            break;
        }
    }
    return s;
}