// Given an integer A, generate a square matrix filled with elements from 1 to A^2 in spiral order.


// 1 <= A <= 1000

vector<vector<int> > Solution::generateMatrix(int A) {
    int count=0;
    int T=0;
    int B=A-1;
    int L=0;
    int R=A-1;
    vector<vector<int>> ans;
    for(int i=0;i<A;i++){
        vector<int> temp;
        for(int j=0;j<A;j++){
            temp.push_back(0);
        }
        ans.push_back(temp);
    }
    while(T<=B&&L<=R){
        for(int i=L;i<=R;i++){
            count++;
            ans[T][i]=count;
        }
        T++;
        for(int i=T;i<=B;i++){
            count++;
            ans[i][R]=count;
        }
        R--;
        for(int i=R;i>=L;i--){
            count++;
            ans[B][i]=count;
        }
        B--;
        for(int i=B;i>=T;i--){
            count++;
            ans[i][L]=count;
        }
        L++;
    }
    return ans;
}