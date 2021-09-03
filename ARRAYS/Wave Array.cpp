// Given an array of integers A, sort the array into a wave like array and return it, In other words, arrange the elements into a sequence such that

// a1 >= a2 <= a3 >= a4 <= a5.....
// If there are multiple answers possible, return the one that's lexicographically smallest.
  
// 1 <= len(A) <= 10^6
// 1 <= A[i] <= 10^6

vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i=i+2){
        int temp=A[i];
        A[i]=A[i+1];
        A[i+1]=temp;
    }
    return A;
}
