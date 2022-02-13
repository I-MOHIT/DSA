// There is a list A, of points(x,y) on the plane. Find the B closest points to the origin (0, 0).

// Here, the distance between two points on a plane is the Euclidean distance (Use distance formula).

// You may return the answer in any order. The answer is guaranteed to be unique (except for the order that it is in.)



// 1 <= B <= length of the list A <= 100000
// -100000 <= A[i][0] <= 100000
// -100000 <= A[i][1] <= 100000



//NOTE - SOLVED USING A PRIORITY QUEUE HERE

vector<vector<int> > Solution::solve(vector<vector<int> > &A, int B) {
    vector<vector<int>> ans;

    priority_queue<pair<long long int,int>> pq;

    for(int i=0;i<A.size();i++){
        long long int distance = A[i][0]*A[i][0]+A[i][1]*A[i][1];

        pq.push({(-1)*distance,i});
    }

    for(int i=0;i<B;i++){
        int index = pq.top().second;

        pq.pop();
        
        vector<int> temp;

        temp.push_back(A[index][0]);
        temp.push_back(A[index][1]);

        ans.push_back(temp);
    }
    
    return ans;
}