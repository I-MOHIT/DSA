// Given three positive integers A, B and C.

// Any positive integer is magical if it is divisible by either B or C.

// Return the Ath magical number. Since the answer may be very large, return it modulo 109 + 7.


// 1 <= A <= 10^9

// 2 <= B, C <= 40000


int gcd(int a,int b){
    int x=max(a,b);
    int y=min(a,b);
    while(b>0){
        a=a%b;
        int temp=a;
        a=b;
        b=temp;
    }
    return a;
}

int Solution::solve(int A, int B, int C) {
    long long int low=1;
    long long int high=A*max(B,C);
    int g=gcd(B,C);
    long long product=B*C;
    long long int l=product/g;
    //cout<<l;
    long long int ans=INT_MIN;
    while(low<=high){
        long long int mid=low+(high-low)/2;
        long long int value=mid/B+mid/C-mid/l;
        if(value==A){
            if(mid%B==0||mid%C==0){
                ans=mid;
                break;
            }else{
                high=mid-1;
            }
        }else if(value<A){
            low=mid+1;
        }else{
            high=mid-1;
        }
        ans=mid;
    }
    return ans%1000000007;
}