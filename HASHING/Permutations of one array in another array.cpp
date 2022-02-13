// You are given two strings A and B of size N and M respectively.

// You have to find the count of all permutations of A present in B as a substring. You can assume a string will have only lowercase letters.




// 1 <= N < M <= 10^5



int Solution::solve(string A, string B) {
    unordered_map<char,int> uma;
    for(int i=0;i<A.length();i++){
        if(uma.find(A[i])==uma.end()){
            uma.insert({A[i],1});
        }else{
            uma[A[i]]++;
        }
    }
    unordered_map<char,int> umb;
    for(int i=0;i<A.length()-1;i++){
        if(umb.find(B[i])==umb.end()){
            umb.insert({B[i],1});
        }else{
            umb[B[i]]++;
        }
    }
    int i=0;
    int j=i+A.length()-1;
    int ans=0;
    while(j<B.length()){
       if(umb.find(B[j])==umb.end()){
            umb.insert({B[j],1});
        }else{
            umb[B[j]]++;
        }
        if(uma==umb){
            ans++;
        }
        if(umb[B[i]]==1){
            umb.erase(B[i]);
        }else{
            umb[B[i]]--;
        }
        i++;
        j++;
    }
    return ans;
}