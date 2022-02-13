// Given a positive integer A, return an array of strings with all the integers from 1 to N. But for multiples of 3 the array should have “Fizz” instead of the number. For the multiples of 5, the array should have “Buzz” instead of the number. For numbers which are multiple of 3 and 5 both, the array should have "FizzBuzz" instead of the number.

// 1 <= A <= 500000


vector<string> Solution::fizzBuzz(int A) {
    vector<string> ans;
    for(int i=1;i<=A;i++){
        string temp="";
        if(i%15==0){
            temp=temp+"FizzBuzz";
        }else if(i%3==0){
            temp=temp+"Fizz";
        }else if(i%5==0){
            temp=temp+"Buzz";
        }else{
            temp=temp+(to_string(i));
        }
        ans.push_back(temp);
    }
    return ans;
}