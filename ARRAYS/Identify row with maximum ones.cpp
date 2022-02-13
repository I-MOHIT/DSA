//  Given a binary sorted matrix A of size N x N. Find the row with the maximum number of 1.

// NOTE:

//     If two rows have the maximum number of 1 then return the row which has a lower index.
//     Rows are numbered from top to bottom and columns are numbered from left to right.
//     Assume 0-based indexing.
//     Assume each row to be sorted by values.
//     Expected time complexity is O(rows).


// 1 <= N <= 1000

// 0 <= A[i] <= 1 


int Solution::solve(vector<vector<int> > &A) {
    int max_row_index=0;
    int max_row_length=0;
    for(int j=0;j<A[0].size();j++){
        if(A[0][j]==1){
            max_row_length=A[0].size()-j;
            max_row_index=0;
            break;
        }
    }
    for(int i=1;i<A.size();i++){
        int j=A[0].size()-max_row_length;
        while(A[i][j]==1&&j>0&&j<A[0].size()){
            if(A[i][j-1]==0){
                break;
            }
            j--;
        }
        int temp_length=A[0].size()-j;
        if(temp_length>max_row_length&&temp_length<=A[0].size()){
            max_row_length=temp_length;
            max_row_index=i;
        }
    }
    return max_row_index;
}