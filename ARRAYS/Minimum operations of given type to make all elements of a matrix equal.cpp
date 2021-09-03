// Given a matrix of integers A of size N x M and an integer B.

// In a single operation, B can be added to or subtracted from any element of the matrix.

// Find and return the minimum number of operations required to make all the elements of the matrix equal and if it impossible return -1 instead.

  
// 1 <= N, M <= 1000
// -1000 <= A[i] <= 1000
// 1 <= B <= 1000

int Solution::solve(vector<vector<int> > &A, int B) {
    int mod;
    int row=A.size();
    int col=A[0].size();
    vector<int> dup;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            dup.push_back(A[i][j]);
        }
    }
    sort(dup.begin(),dup.end());
    if(dup[0]<0){
        mod=B-abs(dup[0])%B;
    }else{
        mod=dup[0]%B;
    }
    for(int i=0;i<row*col;i++){
        if(dup[i]<0){
            int temp=B-abs(dup[i])%B;
            if(temp!=mod){
                return -1;
            }
        }else{
            int temp=dup[i]%B;
            if(temp!=mod){
                return -1;
            }
        }
    }
    int median1=dup[row*col/2];
    int minoperations1=0;
    for(int i=0;i<row*col;i++){
        minoperations1=minoperations1+abs(dup[i]-median1)/B;
    }
    int minoperations2=INT_MAX;
    if((row*col)%2==0){
        int median2=dup[row*col/2-1];
        int minoperations2=0;
        for(int i=0;i<row*col;i++){
            minoperations2=minoperations1+abs(dup[i]-median2)/B;
        }
    }
    if(minoperations2<minoperations1){
        return minoperations2;
    }
    return minoperations1;
}
