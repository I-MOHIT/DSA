// Given 2 non negative integers A and B, find gcd(A, B)

// GCD of 2 integers A and B is defined as the greatest integer g such that g is a divisor of both A and B. Both A and B fit in a 32 bit signed integer.
  
// 0 <= A, B <= 10^9

int Solution::gcd(int A, int B) {
    if(A==0){
        return B;
    }
    if(B==0){
        return A;
    }
    int a=max(A,B);
    int b=min(A,B);
    while(b>0){
        a=a%b;
        int temp=a;
        a=b;
        b=temp;
    }
    return a;
}
