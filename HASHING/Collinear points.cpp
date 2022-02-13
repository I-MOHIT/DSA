// Given two array of integers A and B describing a pair of (A[i], B[i]) coordinates in 2D plane. A[i] describe x coordinates of the ith point in 2D plane whereas B[i] describes the y-coordinate of the ith point in 2D plane.

// Find and return the maximum number of points which lie on the same line.


// 1 <= (length of the array A = length of array B) <= 1000

// -10^5 <= A[i], B[i] <= 10^5



long int gcd(int a,int b){
    long int x=max(a,b);
    long int y=min(a,b);
    while(y>0){
        y=x%y;
        long int temp=x;
        x=y;
        y=temp;
    }
    return x;
}

int Solution::solve(vector<int> &A, vector<int> &B) {
    int ans=INT_MIN;
    map<pair<long int,long int>,int> m;
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            if(i==j){
                continue;
            }else{
                long int num_slope=B[j]-B[i];
                long int den_slope=A[j]-A[i];
                long int g=gcd(num_slope,den_slope);
                num_slope=num_slope/g;
                den_slope=den_slope/g;
                m[make_pair(num_slope,den_slope)]++;
            }
        }
        for(auto k:m){
            ans=max(ans,k.second);
        }
        m.erase(m.begin(),m.end());
    }
    return ans+1;
}