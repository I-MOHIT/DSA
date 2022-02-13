// Given two array of integers A and B, Sort A in such a way that the relative order among the elements will be the same as those are in B. For the elements not present in B, append them at last in sorted order.

// Return the array A after sorting from the above method.

// NOTE: There are no duplicates in the array B.



// 1 <= length of the array A <= 100000

// 1 <= length of the array B <= 100000

// -10^9 <= A[i] <= 10^9 



vector<int> Solution::solve(vector<int> &A, vector<int> &B) {
    unordered_map<int,int> uma;
    for(int i=0;i<A.size();i++){
        if(uma.find(A[i])==uma.end()){
            uma.insert({A[i],1});
        }else{
            uma[A[i]]++;
        }
    }
    unordered_map<int,bool> umb;
    vector<int> ans;
    for(int i=0;i<B.size();i++){
        if(uma.find(B[i])!=uma.end()){
            umb.insert({B[i],true});
            int count=uma[B[i]];
            for(int j=0;j<count;j++){
                ans.push_back(B[i]);
            }
        }
    }
    vector<int> temp;
    for(int i=0;i<A.size();i++){
        if(umb.find(A[i])==umb.end()){
            temp.push_back(A[i]);
        }
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        ans.push_back(temp[i]);
    }
    return ans;
}