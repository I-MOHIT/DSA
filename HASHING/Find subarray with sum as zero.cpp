// Given an array of integers A, find and return whether the given array contains a non-empty subarray with a sum equal to 0.

// If the given array contains a sub-array with sum zero return 1 else return 0.


// 1 <= |A| <= 100000

// -10^9 <= A[i] <= 10^9 



int Solution::solve(vector<int> &A) {
    vector<long long int> prefixsum;
    prefixsum.push_back(0);
    for(int i=0;i<A.size();i++){
        prefixsum.push_back(prefixsum[i]+A[i]);
    }
    unordered_map<long long int,int> um;
    for(int i=0;i<prefixsum.size();i++){
        if(um.find(prefixsum[i])==um.end()){
            um.insert({prefixsum[i],1});
        }else{
            return 1;
        }
    }
    return 0;
}