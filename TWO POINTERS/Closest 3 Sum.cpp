// Given an array A of N integers, find three integers in A such that the sum is closest to a given number B. Return the sum of those three integers.

// Assume that there will only be one solution.



//     -10^8 <= B <= 10^8
//     1 <= N <= 10^4
//     -10^8 <= A[i] <= 10^8


int Solution::threeSumClosest(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int n=A.size();
    int i;
    int sum;
    int ans;
    int mindiff=INT_MAX;
    for(i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            sum=A[i]+A[j]+A[k];
            int diff=abs(sum-B);
            if(diff==0){
                return sum;
            }else if(diff<mindiff){
                mindiff=diff;
                ans=sum;
            }
            if(sum>B){
                k--;
            }else if(sum<B){
                j++;
            }
        }
    }
    return ans;
}