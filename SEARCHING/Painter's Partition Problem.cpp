// Given 2 integers A and B and an array of integers C of size N. Element C[i] represents length of ith board.
// You have to paint all N boards [C0, C1, C2, C3 … CN-1]. There are A painters available and each of them takes B units of time to paint 1 unit of board.

// Calculate and return minimum time required to paint all boards under the constraints that any painter will only paint contiguous sections of board.

// NOTE:
// 1. 2 painters cannot share a board to paint. That is to say, a board cannot be painted partially by one painter, and partially by another.
// 2. A painter will only paint contiguous boards. Which means a configuration where painter 1 paints board 1 and 3 but not 2 is invalid.

// Return the ans % 10000003.


// 1 <= A <= 1000
// 1 <= B <= 10^6
// 1 <= N <= 10^5
// 1 <= C[i] <= 10^6


long long int getMax(vector<int> &C){
    long long int maximum=C[0];
    for(int i=1;i<C.size();i++){
        if(C[i]>maximum){
            maximum=C[i];
        }
    }
    return maximum;
}

long long int getSum(vector<int> &C){
    long long int sum=0;
    for(int i=0;i<C.size();i++){
        sum+=C[i];
    }
    return sum;
}

int noofpainters(vector<int> &C, int mid){
    int painters=1;
    long long int total=0;
    for(int i=0;i<C.size();i++){
        total+=C[i];
        if(total>mid){
            total=C[i];
            painters++;
        }
    }
    return painters;
}

int Solution::paint(int A, int B, vector<int> &C) {
    long long int low=getMax(C);
    long long int high=getSum(C);
    while(low<high){
        long long int mid=low+(high-low)/2;
        int p=noofpainters(C,mid);
        if(p>A){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    return ((low%10000003)*(B%10000003))%10000003;
}