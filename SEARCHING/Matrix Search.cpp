// Given a matrix of integers A of size N x M and an integer B. Write an efficient algorithm that searches for integar B in matrix A.

// This matrix A has the following properties:

//     Integers in each row are sorted from left to right.
//     The first integer of each row is greater than or equal to the last integer of the previous row.

// Return 1 if B is present in A, else return 0.


// 1 <= N, M <= 1000
// 1 <= A[i][j], B <= 10^6

int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size();
    int m=A[0].size();
    for(int i=n-1;i>=0;i--){
        if(A[i][0]>B){
            continue;
        }else{
            int low=0;
            int high=m-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(A[i][mid]==B){
                    return 1;
                }else if(A[i][mid]>B){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }
        }
    }
    return 0;
}