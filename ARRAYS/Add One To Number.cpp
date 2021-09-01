// Given a non-negative number represented as an array of digits, add 1 to the number ( increment the number represented by the digits ).

// The digits are stored such that the most significant digit is at the head of the list.

// 1 <= size of the array <= 1000000

vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    int temp_sum=(A[n-1]+1)%10;
    int carry=(A[n-1]+1)/10;
    A[n-1]=temp_sum;
    for(int i=n-2;i>=0;i--){
        temp_sum=(A[i]+carry)%10;
        carry=(A[i]+carry)/10;
        A[i]=temp_sum;
    }
    if(carry==1){
        A.insert(A.begin(),1);
    }
    int i=0;
    while(i<A.size()){
        if(A[i]==0){
            A.erase(A.begin());
        }else{
            break;
        }
    }
    return A;
}
