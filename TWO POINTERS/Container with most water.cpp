// Given n non-negative integers A[0], A[1], …, A[n-1] , where each represents a point at coordinate (i, A[i]).

// N vertical lines are drawn such that the two endpoints of line i is at (i, A[i]) and (i, 0).

// Find two lines, which together with x-axis forms a container, such that the container contains the most water.



// 0 <= N <= 10^5

// 1 <= A[i] <= 10^5



int Solution::maxArea(vector<int> &A) {
    int n=A.size();
    if(n<=1){
        return 0;
    }
    int i=0;
    int j=n-1;
    int maxarea=INT_MIN;
    while(i<j){
        int minvalue=min(A[i],A[j]);
        int area=minvalue*(j-i);
        maxarea=max(maxarea,area);
        if(minvalue==A[i]){
            i++;
        }else{
            j--;
        }
    }
    return maxarea;
}