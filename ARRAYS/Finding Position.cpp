// Given an integer A which denotes the number of people standing in the queue.

// A selection process follows a rule where people standing on even positions are selected. Of the selected people a queue is formed and again out of these only people on even position are selected.

// This continues until we are left with one person. Find and return the position of that person in the original queue.

// 1 <= A <= 10^9

int Solution::solve(int A) {
    if(A==1){
        return 1;
    }
    int count=0;
    while(A>1){
        count++;
        A=A/2;
    }
    int ans=1;
    for(int i=0;i<count;i++){
        ans=ans*2;
    }
    return ans;
}
