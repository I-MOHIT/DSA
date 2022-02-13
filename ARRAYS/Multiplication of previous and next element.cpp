// Given an array of integers A, update every element with multiplication of previous and next elements with following exceptions. a) First element is replaced by multiplication of first and second. b) Last element is replaced by multiplication of last and second last.

// 1 <= length of the array <= 100000
// -10^4 <= A[i] <= 10^4 



vector<int> Solution::solve(vector<int> &A) {
    vector<int> ans;
    if(A.size()==1){
        return A;
    }
    int temp=A[0]*A[1];
    ans.push_back(temp);
    for(int i=1;i<A.size()-1;i++){
        temp=A[i-1]*A[i+1];
        ans.push_back(temp);
    }
    temp=A[A.size()-2]*A[A.size()-1];
    ans.push_back(temp);
    return ans;
}