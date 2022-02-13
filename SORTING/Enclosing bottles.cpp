// Given an array of integers A of size N which denotes N cylindrical empty bottles. The radius of the ith bottle is A[i].

// You can put the ith bottle into the jth bottle if the following conditions are met:

//     ith bottle is not put into another bottle.
//     jth bottle does not contain any other bottle.
//     The radius of bottle i is smaller than bottle j (A[i] < A[j]). 

// You can put bottles into each other any number of times. You want to MINIMIZE the number of visible bottles. A bottle is called visible if it is not put into any other bottle.

// Find and return the minimum number of visible bottles.


// 1 <= N <= 100000

// 1<= A[i] <= 100000000


int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int maxcount=1;
    int currentcount=1;
    for(int i=1;i<A.size();i++){
        if(A[i]==A[i-1]){
            currentcount++;
            maxcount=max(maxcount,currentcount);
        }else{
            currentcount=1;
        }
    }
    return maxcount;
}