def pairs(n):
    s=(n*(n-1))//2
    return s

class Solution:
    def numPairsDivisibleBy60(self, t: List[int]) -> int:
        d={}
        ans=0
        for i in t:
            if((i%60) not in d):
                d[i%60]=1
            else:
                d[i%60]+=1
        # print(d)
        for i in d:
            if(i!=30 and i!=0):
                try:
                    ans+=d[i]*d[60-i]
                except:
                    pass
        ans/=2
        ans=int(ans)
        
        if(0 in d):
            ans+=pairs(d[0])
        if(30 in d):
            ans+=pairs(d[30])
        
        return ans
            
            