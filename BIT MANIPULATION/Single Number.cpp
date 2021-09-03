//Given an array of integers A, every element appears twice except for one. Find that single one.

// 2 <= |A| <= 2000000

// 0 <= A[i] <= INTMAX

int Solution::singleNumber(const vector<int> &A) {
    int ans=0;
    for(int i=0;i<A.size();i++){
        ans=ans^A[i];
    }
    return ans;
}
