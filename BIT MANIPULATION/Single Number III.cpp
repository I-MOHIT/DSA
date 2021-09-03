// Given an array of numbers A , in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once.

// Output array must be sorted.
  
// 2 <= |A| <= 100000
// 1 <= A[i] <= 10^9

vector<int> Solution::solve(vector<int> &A) {
    int ref=0;
    for(int i=0;i<A.size();i++){
        ref=ref^A[i];
    }
    int temp=ref&(~(ref-1));
    int ans1=0;
    int ans2=0;
    for(int i=0;i<A.size();i++){
        if(A[i]&temp){
            ans1=ans1^A[i];
        }else{
            ans2=ans2^A[i];
        }
    }
    vector<int> ans;
    if(ans1<ans2){
        ans.push_back(ans1);
        ans.push_back(ans2);
    }else{
        ans.push_back(ans2);
        ans.push_back(ans1);
    }
    return ans;
}
