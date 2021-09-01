// Given a matrix of integers A of size N x M and an integer B.
// In the given matrix every row and column is sorted in increasing order. Find and return the position of B in the matrix in the given form:
// If A[i][j] = B then return (i * 1009 + j)
// If B is not present return -1.
// If there are multiple B in A then return the smallest value of i*1009 +j such that A[i][j]=B

// 1 <= N, M <= 1000
// -100000 <= A[i] <= 100000
// -100000 <= B <= 100000

int Solution::solve(vector<vector<int> > &A, int B) {
    int i=0;
    int j=A[0].size()-1;
    int temp=INT_MAX;
    int count=1;
    int a=A.size();
    int b=A[0].size();
    while(i<A.size()&&j>=0&&count<=a*b){
        if(A[i][j]==B){
            int dup=1009*(i+1)+j+1;
            if(dup<temp){
                temp=dup;
            }
            break;
        }else{
            if(A[i][j]<B){
                if(i!=A.size()-1){
                    i++;
                }else{
                    return -1;
                }
            }else if(A[i][j]>B){
                if(j!=0){
                    j--;
                }else{
                    return -1;
                }
            }
        }
        count++;
    }
    for(int k=j-1;k>=0;k--){
        if(A[i][k]==B){
            temp=1009*(i+1)+k+1;
        }else{
            break;
        }
    }
    if(temp!=INT_MAX){
        return temp;
    }
    return -1;
}
