/*
Name : Jaswant Arya
Roll no.:   B17CS036
Username: jaswantcoder
*/

#define pb push_back


class Solution {
public:
    vector<string> ans;
    void perm(string s,string res, int i)
    {
        
      if(i==s.size())
        {  ans.pb(res);
        return ;
        }
        
         perm(s,res+s[i],i+1);
        if(s[i]>='a' && s[i]<='z')
        {
            perm(s,res+char(s[i]-'a'+'A'),i+1);
        }
        else if(s[i]>='A' && s[i]<='Z')
            perm(s,res+char(s[i]-'A'+'a'),i+1);
       
       
        return ;
    }
    
    vector<string> letterCasePermutation(string s) {
        
        perm(s,"",0);
        return ans;
    }
};
