// For Given Number A find if its COLORFUL number or not.

// If number A is a COLORFUL number return 1 else return 0.

// NOTE - 
// A number can be broken into different contiguous sub-subsequence parts. 
// Suppose, a number 3245 can be broken into parts like 3 2 4 5 32 24 45 324 245. 
// And this number is a COLORFUL number, since product of every digit of a contiguous subsequence is different.



// 1 <= A <= 2 * 10^9



int Solution::colorful(int A) {
    unordered_map<long long int,int> um;
    string s=to_string(A);
    if(s.length()==1){
        return 1;
    }
    for(int i=0;i<s.length();i++){
        long long int temp=s[i]-'0';
        if(temp==1||temp==0){
            return 0;
        }
        if(um.find(temp)==um.end()){
            um.insert({temp,1});
        }else{
            return 0;
        }
    }
    for(int l=2;l<s.length();l++){
        int i=0;
        int j=i+l-1;
        long long int product=1;
        for(int k=i;k<j;k++){
            int temp=s[k]-'0';
            if(temp==1||temp==0){
                return 0;
            }
            product=product*temp;
        }
        while(j<s.length()){
            int tbm=s[j]-'0';
            product=product*tbm;
            if(um.find(product)==um.end()){
                um.insert({product,1});
            }else{
                return 0;
            }
            int tbd=s[i]-'0';
            product=product/tbd;
            i++;
            j++;
        }
    }
    return 1;
}