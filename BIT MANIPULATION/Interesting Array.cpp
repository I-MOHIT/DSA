// You have an array A with N elements. We have 2 types of operation available on this array :
// We can split a element B into 2 elements C and D such that B = C + D.
// We can merge 2 elements P and Q as one element R such that R = P^Q i.e XOR of P and Q.
// You have to determine whether it is possible to make array A containing only 1 element i.e. 0 after several splits and/or merge?
  
// 1 <= N <= 100000

// 1 <= A[i] <= 10^6

string Solution::solve(vector<int> &A) {
    int oddcount=0;
    int evencount=0;
    for(int i=0;i<A.size();i++){
        if(A[i]%2==0){
            evencount++;
        }else{
            oddcount++;
        }
    }
    if(oddcount%2==0){
        return "Yes";
    }
    return "No";
}
