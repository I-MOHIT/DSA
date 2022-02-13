// Given two binary strings, return their sum (also a binary string).


string Solution::addBinary(string A, string B) {
    string ans="";
    int i=A.length()-1;
    int j=B.length()-1;
    int temp_sum=0;
    int carry=0;
    while(i>=0||j>=0||carry==1){
        temp_sum=0;
        if(i>=0){
            temp_sum=temp_sum+A[i]-'0';
        }
        if(j>=0){
            temp_sum=temp_sum+B[j]-'0';
        }
        temp_sum=temp_sum+carry;
        ans=char(temp_sum%2+'0')+ans;
        carry=temp_sum/2;
        i--;
        j--;
    }
    return ans;
}