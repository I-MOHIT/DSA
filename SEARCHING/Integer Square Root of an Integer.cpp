// Given an integer A.

// Compute and return the square root of A.

// If A is not a perfect square, return floor(sqrt(A)).

// DO NOT USE SQRT FUNCTION FROM STANDARD LIBRARY.

// NOTE: Do not use sort function. Solve this in O(log(A)) time.



// 0 <= A <= 10^10


int Solution::sqrt(int A) {
    if(A<=1){
        return A;
    }
    long long int low=1;
    long long int high=A/2;
    long long int ans;
    while(low<=high){
        long long int mid=low+(high-low)/2;
        long long int product=mid*mid;
        if(product==A){
            return mid;
        }else if(product<A){
           ans=mid;
           low=mid+1;
        }else{
            high=mid-1;
        }
    }
    return ans;
}