// Given an array of integers, every element appears thrice except for one which occurs once.

// Find that element which does not appear thrice.

// NOTE: Solve it in linear time complexity without using any extra memory.


// 2 <= A <= 5*10^6

// 0 <= A <= INTMAX


int Solution::singleNumber(const vector<int> &A) {
    int first_occurence=0;
    int second_occurence=0;
    for(int i=0;i<A.size();i++){
        first_occurence=(A[i]^first_occurence)&(~second_occurence);
        second_occurence=(A[i]^second_occurence)&(~first_occurence);
    }
    return first_occurence;
}