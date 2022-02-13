// A man has an array A consisting of N elements. We call a pair of distinct indices in that array as a special pair if elements at that index in the array are equal.

// The man wants you to find a special pair such that distance between that pair is minimum. Distance between two indices is defined as |i-j|. If there is no special pair in the array then return -1.



// 1 <= |A| <= 10^5



int Solution::solve(vector<int> &A) {
    unordered_map <int,int> um;
    int mindist=INT_MAX;
    for(int i=0;i<A.size();i++){
        if(um.find(A[i])==um.end()){
            um.insert({A[i],i});
        }else{
            int curr_dist=i-um[A[i]];
            um[A[i]]=i;
            mindist=min(curr_dist,mindist);
        }
    }
    if(mindist==INT_MAX){
        return -1;
    }
    return mindist;
}