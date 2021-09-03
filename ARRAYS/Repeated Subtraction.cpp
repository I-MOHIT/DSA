// ou are given 2 numbers P and Q.

// An operation on these 2 numbers is defined as follows: Take the smaller number of the 2 numbers and subtract it from the bigger number. Keep performing this operation till either of the following criterion is met:

// Both numbers become equal.
// Either of the number becomes 0.
// Find the sum of the final values of P and Q.
  
// 0 <= P,Q <= 10^9

int Solution::getFinal(int A, int B) {
    if(A==0||B==0){
        return max(A,B);
    }
    int a=max(A,B);
    int b=min(A,B);
    while(b>0){
        a=a%b;
        int temp=a;
        a=b;
        b=temp;
    }
    return 2*a;
}
