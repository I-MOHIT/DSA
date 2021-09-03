// There are N players each with strength A[i]. when player i attack player j, player j strength reduces to max(0, A[j]-A[i]). When a player's strength reaches zero, it loses the game and the game continues in the same manner among other players until only 1 survivor remains.

// Return the minimum health last surviving person can have?
  
// 1 <= N <= 100000

// 1 <= A[i] <= 1000000

int gcd(int a, int b){
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

int Solution::solve(vector<int> &A) {
    int ans=A[0];
    int n=A.size();
    if(n==1){
        return ans;
    }
    for(int i=1;i<n;i++){
        ans=gcd(ans,A[i]);
    }
    return ans;
}
