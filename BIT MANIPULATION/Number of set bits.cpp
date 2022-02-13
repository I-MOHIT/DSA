// Write a function that takes an integer and returns the number of 1 bits it has.


// 1 <= A <= 10^9


int Solution::numSetBits(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int count=0;
    int bits=sizeof(A)*8;
    for(int i=0;i<bits;i++){
        if(A&1==1){
            count++;
        }
        A=A>>1;
    }
    return count;
}