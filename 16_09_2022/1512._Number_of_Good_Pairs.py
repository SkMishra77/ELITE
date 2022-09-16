class Solution:
    def numIdenticalPairs(self, n: List[int]) -> int:
        d={}
        ans=0
        for i in range(len(n)):
            if(n[i] not in d):
                d[n[i]]=1
            else:
                d[n[i]]+=1
        for i,j in d.items():
            if(j>=2):
                ans+=(j*(j-1))/2
        return int(ans)
                