/* Name: Utkarsh Kumar
Roll No:B18EC033
Leetcode Username: utkarshkanswal
*/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int> mp;
        set<int> s;
        for(auto x:nums)
        {
            mp[x]++;
            s.insert(x);
        }
        int res=0;
        for(auto it:s)
        {
            if(mp[it]>0&&mp[it+1]>0)
            {
                res=max(res,mp[it]+mp[it+1]);
            }
        }
        return res;  
    }
};