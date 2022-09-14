class Solution:
    def numSubarraysWithSum(self, n: List[int], g: int) -> int:
        d={}
        # d[0]=1
        sum=0
        ans=0
        for i in n:
            sum+=i
            if(sum==g):
                ans+=1
            if(sum-g) in d:
                ans+=d[sum-g]
            
            if(sum in d):
                d[sum]+=1
            else:
                d[sum]=1
        print(d)
        return ans