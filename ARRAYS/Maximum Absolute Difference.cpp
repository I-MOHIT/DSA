// You are given an array of N integers, A1, A2, .... AN.

// Return the maximum value of f(i, j) for all 1 ≤ i, j ≤ N. f(i, j) is defined as |A[i] - A[j]| + |i - j|, where |x| denotes absolute value of x.

// 1 <= N <= 100000

// -10^9 <= A[i] <= 10^9

int maxArr(vector<int> &A) {
    int first_first=INT_MIN;
    int first_second=INT_MAX;
    int second_first=INT_MIN;
    int second_second=INT_MAX;
    for(int i=0;i<A.size();i++){
        if((A[i]+i)>first_first){
            first_first=A[i]+i;
        }
        if((A[i]+i)<first_second){
            first_second=A[i]+i;
        }
        if((A[i]-i)>second_first){
            second_first=A[i]-i;
        }
        if((A[i]-i)<second_second){
            second_second=A[i]-i;
        }
    }
    return max(first_first-first_second,second_first-second_second);
}
