// Given an integer array A of size N.

// You have to find all possible non-empty subsequence of the array of numbers and then, for each subsequence, find the difference between the largest and smallest numbers in that subsequence Then add up all the differences to get the number.

// As the number may be large, output the number modulo 10^9 + 7.



// 1 <= N <= 10000

// 1<= A[i] <=1000



int Solution::solve(vector<int> &A) {
    int n=A.size();
    sort(A.begin(),A.end());
    vector<long long int> powersof2;
    powersof2.push_back(1);
    
    for(int i=1;i<n;i++){
        long long int temp=(powersof2[i-1]*2)%1000000007;
        powersof2.push_back(temp);
    }
    
    long long int ans=0;
    for(int i=0;i<n;i++){
        ans=(ans+(powersof2[i]-powersof2[n-1-i])*A[i]);
    }
    return ans%1000000007;
}