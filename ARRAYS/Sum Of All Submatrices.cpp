// Given a 2D Matrix A of dimensions N*N, we need to return sum of all possible submatrices.

// 1 <= N <=30

// 0 <= A[i][j] <= 10

int Solution::solve(vector<vector<int> > &A) {
    int a=A.size();
    int b=A[0].size();
    int sum=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            sum=sum+(i+1)*(j+1)*(a-i)*(b-j)*A[i][j];
        }
    }
    return sum;
}
