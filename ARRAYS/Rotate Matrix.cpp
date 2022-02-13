// You are given a n x n 2D matrix A representing an image.

// Rotate the image by 90 degrees (clockwise).

// You need to do this in place.

// Note: Don't use an additional array.



// 1 <= n <= 1000



void Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            int temp=A[i][j];
            A[i][j]=A[i][n-1-j];
            A[i][n-1-j]=temp;
        }
    }
    return;
}