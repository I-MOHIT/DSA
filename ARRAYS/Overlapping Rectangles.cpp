// Given eight integers A, B, C, D, E, F, G and H which represent two rectangles in a 2D plane.
// For the first rectangle it's bottom left corner is (A, B) and top right corner is (C, D) and for the second rectangle it's bottom left corner is (E, F) and top right corner is (G, H).

// Find and return whether the two rectangles overlap or not.
  
// -10000 <= A < C <= 10000

// -10000 <= B < D <= 10000

// -10000 <= E < G <= 10000

// -10000 <= F < H <= 10000
  
int Solution::solve(int A, int B, int C, int D, int E, int F, int G, int H) {
    if(E>=C||G<=A||F>=D||H<=B){
        return 0;
    }
    return 1;
} 
