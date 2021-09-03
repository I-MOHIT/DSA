// You are given a number A and a number B. Greatest Common Divisor (GCD) of all numbers between A and B inclusive is taken (GCD(A, A+1, A+2 ... B)).
// As this problem looks a bit easy, it is given that numbers A and B can be in the range of 10100.

// You have to return the value of GCD found.
  
// 1 <= A <= B <= 10^100

string Solution::solve(string A, string B) {
    if(A==B){
        return A;
    }
    return "1";
}
