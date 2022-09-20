class Solution {
public:
    string decodeMessage(string key, string message) {
        string ans="";
        map<char,int> d;
        char alp='a';
        for(auto x:key)
        {
            if(x!=' ')
            {
                if(d[x]==0)
                {
                    d[x]=alp;
                    alp++;
                }
            }
        }
        
        for(auto xx:message)
        {
            if(xx!=' ')
            {
                ans+=d[xx];
            }
            else
            {
                ans+=" ";
            }
        }
        return ans;
    }
};