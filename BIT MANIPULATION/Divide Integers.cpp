// Divide two integers without using multiplication, division and mod operator.

// Return the floor of the result of the division.

// Also, consider if there can be overflow cases i.e output is greater than INT_MAX, return INT_MAX.

// -2^31 <= A, B <= 2^31-1

// B!= 0

int Solution::divide(int A, int B) {
    if(B==1){
        return A;
    }
    if(A==0){
        return B;
    }
    long long int ans=0;
    int sign=1;
    if((A>0&&B<0)||(A<0&&B>0)){
        sign=-1;
    }
    long long int a=A;
    long long int b=B;
    long long int abs_a=abs(a);
    long long int abs_b=abs(b);
    long long int divisor=0;
    for(int i=31;i>-1;i--){
        if(divisor+(abs_b<<i)<=abs_a){
            divisor=divisor+abs_b<<i;
            ans=ans+(1LL<<i);
        }
    }
    if(ans>INT_MAX){
        return INT_MAX;
    }
    int final_ans=ans*sign;
    return final_ans;
}
