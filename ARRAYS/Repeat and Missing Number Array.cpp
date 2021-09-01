// You are given a read only array of n integers from 1 to n.

// Each integer appears exactly once except A which appears twice and B which is missing.

// Return A and B.

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    vector<int> ans;
    vector<int> temp;
    for(int i=0;i<A.size()+1;i++){
        ans.push_back(0);
    }
    for(int i=0;i<A.size();i++){
        ans[A[i]]=ans[A[i]]+1;
    }
    for(int i=1;i<A.size()+1;i++){
        if(ans[i]==2){
          temp.push_back(i);
          break;
        }
    }
    for(int i=1;i<A.size()+1;i++){
        if(ans[i]==0){
            temp.push_back(i);
            break;
        }
    }
    return temp;
}
