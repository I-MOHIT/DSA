// Given an array of integers A and multiple values in B which represents number of times array A needs to be left rotated.

// Find the rotated array for each value and return the result in the from of a matrix where i'th row represents the rotated array for the i'th value in B.



// 1 <= length of both arrays <= 2000 -10^9 <= A[i] <= 10^9 0 <= B[i] <= 2000


vector<vector<int> > Solution::solve(vector<int> &A, vector<int> &B) {
    vector<vector<int>> ans;
    for(int i=0;i<B.size();i++){
        vector<int> temp;
        int start=B[i]%A.size();
        for(int j=start;j<A.size();j++){
            temp.push_back(A[j]);
        }
        for(int j=0;j<start;j++){
            temp.push_back(A[j]);
        }
        ans.push_back(temp);
    }
    return ans;
}