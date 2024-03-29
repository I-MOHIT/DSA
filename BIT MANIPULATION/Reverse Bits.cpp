// Reverse the bits of an 32 bit unsigned integer A.
  
// 0 <= A <= 2^32

unsigned int Solution::reverse(unsigned int A) {
    unsigned int ans=0;
    for(int i=0;i<32;i++){
        ans=ans<<1;
        if(A&1==1){
            ans=ans|1;
        }else{
            ans=ans|0;
        }
        A=A>>1;
    }
    return ans;
}
