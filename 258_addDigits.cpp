class Solution {
public:

int sumOfDigits(int num){
  int sum=0;
        while(num>0){
            int d=num%10;
            sum=sum+d;
            num=num/10;
        }
        return sum;
}
    int addDigits(int num) {
      while(num>9){
        int sum=sumOfDigits(num);
       num=sum;
      }
       return num;
    }
};


// Input: num = 38
// Output: 2
// Explanation: The process is
// 38 --> 3 + 8 --> 11
// 11 --> 1 + 1 --> 2 
// Since 2 has only one digit, return it.
// Example 2:

// Input: num = 0
// Output: 0