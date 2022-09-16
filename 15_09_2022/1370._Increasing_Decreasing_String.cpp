class Solution {
public:
    string sortString(string s) {
        map<char,int> d;
        string ans="";
        for(auto &x:s)
        {
            d[x]++;
        }
        
        int l=s.length();
        while(l>0)
        {
            for(auto &x:d)
            {
                if(x.second>=1)
                {
                    ans+=x.first;
                    x.second--;
                    l--;
                }
            }
            
            for(auto k='z';k>='a';k--)
            {
                if(d[k]>=1)
                {
                    ans+=k;
                    d[k]--;
                    l--;
                }
            }
        }
        return ans;
    }
};