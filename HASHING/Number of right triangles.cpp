// Given two arrays of integers A and B of size N each, where each pair (A[i], B[i]) for 0 <= i < N represents a unique point (x, y) in 2D Cartesian plane.

// Find and return the number of unordered triplets (i, j, k) such that (A[i], B[i]), (A[j], B[j]) and (A[k], B[k]) form a right angled triangle with the triangle having one side parallel to the x-axis and one side parallel to the y-axis.

// Return the answer modulo (10^9 + 7).


// 1 <= N <= 10^5

// 0 <= A[i], B[i] <= 10^9 



int Solution::solve(vector<int> &A, vector<int> &B) {
    long long int ans=0;
    unordered_map<int,int> umx;
    unordered_map<int,int> umy;
    for(int i=0;i<A.size();i++){
        if(umx.find(A[i])==umx.end()){
            umx.insert({A[i],1});
        }else{
            umx[A[i]]++;
        }
        if(umy.find(B[i])==umy.end()){
            umy.insert({B[i],1});
        }else{
            umy[B[i]]++;
        }
    }
    for(int i=0;i<A.size();i++){
        long long int temp=(umx[A[i]]-1)*(umy[B[i]]-1);
        ans=ans+temp;
    }
    return ans%1000000007;
}