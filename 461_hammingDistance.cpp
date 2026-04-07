class Solution {
public:
    int hammingDistance(int x, int y) {
        int count=0;

        while(x!=0 || y!=0){//if we use && then when small number becime 0 in last then not check for while condition for large number so we use ||
            int bin1=x%2;
            int bin2=y%2;

            if(bin1!=bin2){
                count++;
            }
            x/=2;
            y/=2;
        }
        return count;
    }
};


// Example 1:

// Input: x = 1, y = 4
// Output: 2
// Explanation:
// 1   (0 0 0 1)
// 4   (0 1 0 0)
//        ↑   ↑
// The above arrows point to positions where the corresponding bits are different.
// Example 2:

// Input: x = 3, y = 1
// Output: 1