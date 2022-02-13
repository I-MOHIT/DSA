// Given two arrays of integers A and B of size N each, where each pair (A[i], B[i]) for 0 <= i < N represents a unique point (x, y) in 2-D Cartesian plane.

// Find and return the number of unordered quadruplet (i, j, k, l) such that (A[i], B[i]), (A[j], B[j]), (A[k], B[k]) and (A[l], B[l]) form a rectangle with the rectangle having all the sides parallel to either x-axis or y-axis.



// 1 <= N <= 2000
// 0 <= A[i], B[i] <= 10^9 



int Solution::solve(vector<int> &A, vector<int> &B) {
    int count=0;
    set<pair<int,int>> sp;
    for(int i=0;i<A.size();i++){
        pair<int,int> p;
        p.first=A[i];
        p.second=B[i];
        sp.insert(p);
    }
    for(int i=0;i<A.size();i++){
        for(int j=0;j<A.size();j++){
            if(i==j){
                continue;
            }else{
                if(A[i]!=A[j]&&B[i]!=B[j]){
                    pair<int,int> p1;
                    pair<int,int> p2;
                    p1.first=A[i];
                    p1.second=B[j];
                    p2.first=A[j];
                    p2.second=B[i];
                    if(sp.find(p1)!=sp.end()&&sp.find(p2)!=sp.end()){
                        count++;
                    }
                }
            }
        }
    }
    return count/4;
}