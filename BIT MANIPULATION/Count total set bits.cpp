// Given a positive integer A, the task is to count the total number of set bits in the binary representation of all the numbers from 1 to A.

// Return the count modulo 109 + 7.


// 1 <= A <= 10^9



int Solution::solve(int A) {
    long long sum;
    A++;                    //including 0 as well
    sum=A/2;                //Half (Floor Value) of the numbers will have their first bit as 1
    int currentpow=2;
    while(currentpow<=A){
        int pairsofzeroone=A/currentpow;
        sum=sum+(pairsofzeroone/2)*(currentpow);
        if(pairsofzeroone%2!=0){
            sum=sum+(A%currentpow);
        }
        currentpow=currentpow*2;
    }
    return sum%1000000007;
}