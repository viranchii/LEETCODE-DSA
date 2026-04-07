#include <climits>

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans=1;
        for(int i=1;i<=31;i++){
             if(ans==n){
                return true;
            }
            if(ans<INT_MAX/2){  //int max se divide krke check kr rhe hai ki ans*2 int ke range me aayega ya nhi        
ans=ans*2;
            }
           
        }
        return false;
    }
};


// Input: n = 1
// Output: true
// Explanation: 20 = 1
// Example 2:

// Input: n = 16
// Output: true
// Explanation: 24 = 16
// Example 3:

// Input: n = 3
// Output: false