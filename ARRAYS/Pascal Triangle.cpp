// Write a program to input an integer N from user and print pascal triangle up to N rows.



// 1 <= N <= 25


vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> ans;
    if(A==0){
        return ans;
    }
    vector<int> row1;
    row1.push_back(1);
    ans.push_back(row1);
    if(A==1){
        return ans;
    }
    vector<int> row2;
    row2.push_back(1);
    row2.push_back(1);
    ans.push_back(row2);
    if(A==2){
        return ans;
    }
    for(int i=2;i<A;i++){
        vector<int> temp;
        temp.push_back(1);
        for(int j=1;j<i;j++){
            int dup=ans[i-1][j-1]+ans[i-1][j];
            temp.push_back(dup);
        }
        temp.push_back(1);
        ans.push_back(temp);
    }
    return ans;
}