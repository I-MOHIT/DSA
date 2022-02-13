// A Farmer has built a new long barn, with N stalls. Given an array of integers A of size N where each element of the array represents the location of the stall, and an integer B which represent the number of cows.

// The cows don't like this barn layout and become aggressive towards each other once put into a stall. To prevent the cows from hurting each other, the farmer wants to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. What is the largest minimum distance?


// 2 <= N <= 100000
// 0 <= A[i] <= 10^9
// 2 <= B <= N

bool ispossible(vector<int> &A,int m,int B){
    int prev=A[0];
    int cows=B-1;
    int curr_barn_index=1;
    while(cows>0&&curr_barn_index<A.size()){
        if(prev+m<=A[curr_barn_index]){
            cows--;
            prev=A[curr_barn_index];
        }
        curr_barn_index++;
    }
    if(cows==0){
        return true;
    }
    return false;
}

int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    int low=0;
    int high=(A[A.size()-1]-A[0])/(B-1);
    int ans=INT_MIN;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(ispossible(A,mid,B)){
            ans=mid;
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}