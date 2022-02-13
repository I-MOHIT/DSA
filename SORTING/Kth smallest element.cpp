//  Find the Bth smallest element in given array A .

// NOTE: Solve it in <= B swaps.



// Problem Constraints

// 1 <= |A| <= 100000

// 1 <= B <= min(|A|, 500)

// 1 <= A[i] <= 10^9


int Solution::kthsmallest(const vector<int> &A, int B) {
    vector<int> temp;
    for(int i=0;i<A.size();i++){
        temp.push_back(A[i]);
    }
    sort(temp.begin(),temp.end());
    return temp[B-1];
}