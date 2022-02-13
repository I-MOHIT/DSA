// Give a N * N square matrix A, return an array of its anti-diagonals.


// 1<= N <= 1000
// 1<= A[i][j] <= 10^9


vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    int n=A.size();
    vector<vector<int>> ans;
    for(int j=0;j<n;j++){
        vector<int> temp;
        for(int i=0;i<=j;i++){
            temp.push_back(A[i][j-i]);
        }
        ans.push_back(temp);
    }
    for(int i=1;i<n;i++){
        vector<int> temp;
        for(int j=n-1;j>=i;j--){
            temp.push_back(A[n-1-j+i][j]);
        }
        ans.push_back(temp);
    }
    return ans;
}