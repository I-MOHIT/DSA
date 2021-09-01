//Given a vector A of non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining

//1 <= |A| <= 100000

int Solution::trap(const vector<int> &A) {
    int total=0;
    int maxvalue=A[0];
    int maxindex=0;
    for(int i=1;i<A.size();i++){
        if(A[i]>=maxvalue){
            maxvalue=A[i];
            maxindex=i;
        }
    }
    int leftmax=0;
    int rightmax=maxvalue;
    for(int i=0;i<maxindex;i++){
        if(A[i]>leftmax){
            leftmax=A[i];
        }
        if(A[i]<leftmax&&A[i]<rightmax){
            int maxheight=min(leftmax,rightmax);
            total=total+(maxheight-A[i]);
        }
    }
    leftmax=maxvalue;
    rightmax=0;
    for(int i=A.size()-1;i>maxindex;i--){
        if(A[i]>rightmax){
            rightmax=A[i];
        }
        if(A[i]<leftmax&&A[i]<rightmax){
            int maxheight=min(leftmax,rightmax);
            total=total+(maxheight-A[i]);
        }
    }
    return total;
}
