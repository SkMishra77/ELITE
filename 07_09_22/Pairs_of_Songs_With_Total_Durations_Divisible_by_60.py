def pairs(n):
    s=0
    for i in range(1,n):
        s+=i
    return s

class Solution:
    def numPairsDivisibleBy60(self, t: List[int]) -> int:
        t=[i%60 for i in t ]
        # print(t)
        d={}
        ans=0
        for i in t:
            if((i%60) not in d):
                d[i%60]=1
            else:
                d[i%60]+=1
        # print(d)
        for i in d.keys():
            if(i!=30 and i!=0):
                try:
                    ans+=d[i]*d[60-i]
                except:
                    pass
        ans/=2
        ans=int(ans)
        
        try:
            ans+=pairs(d[0])
        except:
            pass
        
        try:
            ans+=pairs(d[30])
        except:
            pass
            
        return ans
            
            