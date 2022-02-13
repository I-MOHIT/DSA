// "Primal Power" of an array is defined as the count of prime numbers present in it.

// Given an array of integers A of length N, you have to calculate its Primal Power.



// 1 <= N <= 10^3

// -10^6 <= A[i] <= 10^6



bool isPrime(int a){
    if(a==1){
        return false;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return false;
        }
    }
    return true;
}

int Solution::solve(vector<int> &A) {
    int count=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<=0){
            continue;
        }else{
            bool prime=isPrime(A[i]);
            if(prime==true){
                count++;
            }
        }
    }
    return count;
}