//  Given an array A and a integer B. A pair(i,j) in the array is a good pair if i!=j and (A[i]+A[j]==B). Check if any good pair exist or not.


// 1 <= A.size() <= 10^4

// 1 <= A[i] <= 10^9

// 1 <= B <= 10^9


int Solution::solve(vector<int> &A, int B) {
    for(int i=1;i<A.size();i++){
        for(int j=0;j<i;j++){
            if(A[i]+A[j]==B){
                return 1;
            }
        }
    }
    return 0;
}