// Given an array of integers A of size N and an integer B.

// College library has N books,the ith book has A[i] number of pages.

// You have to allocate books to B number of students so that maximum number of pages alloted to a student is minimum.

// NOTE:-

// A book will be allocated to exactly one student.
// Each student has to be allocated at least one book.
// Allotment should be in contiguous order.

// Calculate and return that minimum possible number.

// NOTE: Return -1 if a valid assignment is not possible.

// 1 <= N <= 10^5
// 1 <= A[i], B <= 10^5


long long int getMax(vector<int> &A){
    long long int maximum=A[0];
    for(int i=1;i<A.size();i++){
        if(A[i]>maximum){
            maximum=A[i];
        }
    }
    return maximum;
}

long long int getSum(vector<int> &A){
    long long int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i];
    }
    return sum;
}

int noofstudents(vector<int> &A,int B,int mid){
    long long int total=0;
    int students=1;
    for(int i=0;i<A.size();i++){
        total+=A[i];
        if(total>mid){
            total=A[i];
            students++;
        }
    }
    return students;
}

int Solution::books(vector<int> &A, int B) {
    if(B>A.size()){
        return -1;
    }
    long long int low=getMax(A);
    long long int high=getSum(A);
    while(low<high){
        long long int mid=low+(high-low)/2;
        int s=noofstudents(A,B,mid);
        if(s>B){
            low=mid+1;
        }else{
            high=mid;
        }
    }
    return low;
}