// Given an unsorted integer array A of size N.

// Find the length of the longest set of consecutive elements from the array A.


// 1 <= N <= 10^6

// -10^6 <= A[i] <= 10^6



int Solution::longestConsecutive(const vector<int> &A) {
    unordered_set <int> us;
    for(int i=0;i<A.size();i++){
        us.insert(A[i]);
    }
    int ans=1;
    int i=0;
    while(i<A.size()){
        int count=1;
        if(us.find(A[i]-1)!=us.end()){
            i++;
        }else{
            int value=A[i];
            while(us.find(value+1)!=us.end()){
                count++;
                value++;
            }
            ans=max(ans,count);
            i++;
        }
    }
    return ans;
}