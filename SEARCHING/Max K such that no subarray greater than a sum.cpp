// Given an array of integers A and an integer B, find and return the maximum value K such that there is no subarray in A of size K with sum of elements greater than B.



// 1 <= |A| <= 100000

// 1 <= A[i] <= 10^9

// 1 <= B <= 10^9


bool satisfies(vector<int> &A,int m,int B){
    int i=0;
    int j=i+m-1;
    long long int sum=0;
    for(int k=i;k<j;k++){
        sum+=A[k];
    }
    while(j<A.size()){
        sum+=A[j];
        if(sum>B){
            return false;
        }
        sum-=A[i];
        i++;
        j++;
    }
    return true;
}

int Solution::solve(vector<int> &A, int B) {
    int n=A.size();
    int low=0;
    int high=n;
    int ans=INT_MIN;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(satisfies(A,mid,B)){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}