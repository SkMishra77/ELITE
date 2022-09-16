class Solution:
    def countConsistentStrings(self, alw: str, wrd: List[str]) -> int:
        d=[0]*26
        ans=0
        for i in alw:
            t=ord(i)-97
            d[t]=1
        
        for i in wrd:
            xx=1
            for j in i:
                j=ord(j)-97
                if(d[j]==0):
                    xx=0
                    break
            if(xx):
                ans+=1
                
        return ans