// Given two sorted integer arrays A and B, merge B and A as one sorted array and return it as an output.


// -10^10 <= A[i],B[i] <= 10^10


vector<int> Solution::solve(const vector<int> &A, const vector<int> &B) {
    vector<int> ans;
    int i=0;
    int j=0;
    while(i<A.size()&&j<B.size()){
        if(A[i]<B[j]){
            ans.push_back(A[i]);
            i++;
        }else{
            ans.push_back(B[j]);
            j++;
        }
    }
    if(i!=A.size()){
        while(i<A.size()){
            ans.push_back(A[i]);
            i++;
        }
    }else{
        while(j<B.size()){
            ans.push_back(B[j]);
            j++;
        }
    }
    return ans;
}