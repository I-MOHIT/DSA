// Given a string A, find the length of the longest substring without repeating characters.

// Note: Solve it in O(N) time complexity.



// 1 <= size(A) <= 10^6




int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<char,int> um;
    int maxlength=INT_MIN;
    int currlength=0;
    for(int i=0;i<A.length();i++){
        if(um.find(A[i])==um.end()){
            um.insert({A[i],i});
            currlength++;
        }else{
            maxlength=max(maxlength,currlength);
            currlength=min(currlength+1,i-um[A[i]]);
            um[A[i]]=i;
        }
    }
    maxlength=max(maxlength,currlength);
    return maxlength;
}