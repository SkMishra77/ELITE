class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.length()!=t.length())
        {
            return false;
        }
        
        
        map<char,char> m;
        map<char,char> m1;
        
        int i=0;
        for(auto ch:s)
        {
                m[ch]=t[i++];
        }
        i=0;
        for(auto ch:t)
        {
            m1[ch]=s[i++];
        }
        
        for(i=0;i<s.length();i++)
        {
            if(m[s[i]]!=t[i] || m1[t[i]]!=s[i])
            {
                cout<<m[s[i]]<<" "<<t[i]<<" 1\n";
                cout<<m1[t[i]]<<" "<<s[i]<<" 2\n";
                return false;
            }
        }
        
        return true;
        

        
    }
};