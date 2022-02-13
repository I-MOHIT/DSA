// Given an array A of non-negative integers of size N. Find the minimum sub-array Al, Al+1 ,…, Ar such that if we sort(in ascending order) that sub-array, then the whole array should get sorted. If A is already sorted, output -1.


// 1 <= N <= 1000000
// 1 <= A[i] <= 1000000


vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    int i=0;
    int j=n-1;
    vector<int> ans;
    for(i=0;i<n-1;i++){
        if(A[i]<=A[i+1]){
            continue;
        }else{
            break;
        }
    }
    for(j=n-1;j>0;j--){
        if(A[j]>=A[j-1]){
            continue;
        }else{
            break;
        }
    }
    if(i==n-1){
        ans.push_back(-1);
        return ans;
    }
    int mininrange=INT_MAX;
    int maxinrange=INT_MIN;
    for(int k=i;k<=j;k++){
        mininrange=min(mininrange,A[k]);
        maxinrange=max(maxinrange,A[k]);
    }
    int l=0;
    int r=n-1;
    while(A[l]<=mininrange&&l<=i){
        l++;
    }
    while(A[r]>=maxinrange&&r>=j){
        r--;
    }
    ans.push_back(l);
    ans.push_back(r);
    return ans;
}