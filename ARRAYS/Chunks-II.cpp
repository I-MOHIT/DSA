// Given an array of integers (not necessarily distinct) A, if we split the array into some number of "chunks" (partitions), and individually sort each chunk. After concatenating them, the result equals the sorted array.

// What is the most number of chunks we could have made?
  
// 1 <= N <= 100000
// -10^9 <= A[i] <= 10^9

int Solution::solve(vector<int> &A) {
    vector<int> dup;
    for(int i=0;i<A.size();i++){
        dup.push_back(A[i]);
    }
    int sumA=0;
    int sumdup=0;
    sort(dup.begin(),dup.end());
    int chunks=0;
    for(int i=0;i<A.size();i++){
        sumA=sumA+A[i];
        sumdup=sumdup+dup[i];
        if(sumA==sumdup){
            chunks++;
        }
    }
    return chunks;
}
