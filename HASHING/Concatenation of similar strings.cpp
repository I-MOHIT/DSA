// Given a string B, find if it is possible to re-order the characters of the string B so that it can be represented as a concatenation of A similar strings.

// If it is possible, return 1, else return -1.


// NOTE - All the alphabets of the string are lowercase alphabets only.

// 1 <= Length of string B <= 1000

// 1 <= A <= 1000



int Solution::solve(int A, string B) {
    unordered_map<char,int> um;
    for(int i=0;i<B.length();i++){
        if(um.find(B[i])==um.end()){
            um.insert({B[i],1});
        }else{
            um[B[i]]++;
        }
    }
    for(auto i:um){
        if((i.second)%A!=0){
            return -1;
        }
    }
    return 1;
}