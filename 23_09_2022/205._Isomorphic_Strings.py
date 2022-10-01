class Solution:
    def isIsomorphic(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
        d={}
        d1={}
        i=0
        for i in range(len(s)):
            if(s[i] not in d):
                d[s[i]]=t[i]
            if(t[i] not in d1):
                d1[t[i]]=s[i]
            if(d[s[i]]!=t[i] or d1[t[i]]!=s[i]):
                return False
            
        return True
        