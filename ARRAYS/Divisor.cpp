// Scooby has 3 three integers A, B and C.

// Scooby calls a positive integer special if it is divisible by B and it is divisible by C. You need to tell number of special integers less than or equal to A.
  
// 1 <= A, B, C <= 10^9

int gcd(int a,int b){
    int x=max(a,b);
    int y=min(a,b);
    while(y>0){
        x=x%y;
        int temp=x;
        x=y;
        y=temp;
    }
    return x;
}

int Solution::solve(int A, int B, int C) {
    int count=0;
    int hcf=gcd(B,C);
    int lcm=B*C/hcf;
    for(int i=lcm;i<=A;i=i+lcm){
        if(i%B==0&&i%C==0){
            count++;
        }
    }
    return count;
}
