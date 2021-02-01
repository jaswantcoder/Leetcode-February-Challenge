/*
Name: Jaswant Arya
Roll no.: B17CS036
Leetcode username: jaswantcoder
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans=0;
        while(n)
        {
            if(n&1)
                ans++;
            n=n>>1;
        }
        return ans;
        
    }
};
