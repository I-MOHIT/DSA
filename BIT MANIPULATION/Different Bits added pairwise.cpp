// We define f(X, Y) as number of different corresponding bits in binary representation of X and Y.
// For example, f(2, 7) = 2, since binary representation of 2 and 7 are 010 and 111, respectively. The first and the third bit differ, so f(2, 7) = 2.

// You are given an array of N positive integers, A1, A2 ,..., AN. Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N. Return the answer modulo 10^9+7.

// 1 <= N <= 10^5

// 1 <= A[i] <= 2^31 - 1

int Solution::cntBits(vector<int> &A) {
    long long int ans=0;
    for(int i=0;i<32;i++){
        int count=0;
        for(int j=0;j<A.size();j++){
            if(A[j]&(1<<i)){
                count++;
            }
        }
        ans=ans+(count)*(A.size()-count)*2;
    }
    int final_ans=ans%1000000007;
    return final_ans;
}
