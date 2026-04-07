class Solution
{
public:
    int bitwiseComplement(int n)
    {
        //if m=5=101 complement is 010=2
        int m = n;
        int mask = 0;

        if (m == 0)
        {
            return 1;
        }

        //we are creating a mask of all 1's with the same number of bits as n. For example, if n has 3 bits, we want a mask of 111 (which is 7 in decimal). This way, when we take the bitwise NOT of n and then AND it with the mask, we will get the complement of n within the range of its bits.
        
        while (m != 0)
        {
           
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
       
        int ans = (~n) & mask; //
        return ans;
    }
};

//iteration 1
// m = 5 (101)
// mask = 0

// mask = (0 << 1) | 1 = 1   // 001
// m = 5 >> 1 = 2            // 010

// //iteration 2
// m = 2 (10)
// mask = 1 (001)

// mask = (1 << 1) | 1 = 3   // 011
// m = 2 >> 1 = 1            // 001

// //iteration 3
// m = 1 (1)
// mask = 3 (011)

// mask = (3 << 1) | 1 = 7   // 111
// m = 1 >> 1 = 0

// // Now m is 0, we exit the loop. The mask is now 7 (111 in binary), which has the same number of bits as n (5 has 3 bits).

// //~n
// n  = 000...0101
// ~n = 111...1010   (flip all bits)

// ~n   = ...1010
// mask = 0000111
// ----------------
// ans  = 0000010 (which is 2 in decimal)

// ans = 2


// Example 1:

// Input: n = 5
// Output: 2
// Explanation: 5 is "101" in binary, with complement "010" in binary, which is 2 in base-10.
// Example 2:

// Input: n = 7
// Output: 0
// Explanation: 7 is "111" in binary, with complement "000" in binary, which is 0 in base-10.
// Example 3:

// Input: n = 10
// Output: 5
// Explanation: 10 is "1010" in binary, with complement "0101" in binary, which is 5 in base-10.