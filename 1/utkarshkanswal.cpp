/* Name: Utkarsh Kumar
Roll No: B18EC033
Leetcode Username: utkarshkanswal
*/


class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        uint32_t e=1;
        for(uint32_t i=0;i<=31;i++)
        {
            if((n&(e<<i))!=0)
                res++;
        }
        return res;
    }
};