class Solution:
    def canBeIncreasing(self, n: List[int]) -> bool:
        f=0
        for i in range(1,len(n)):
            if(n[i-1]>=n[i]):
                if(f):
                    return False
                f=1
                if(i>1 and (n[i-2]>=n[i])):
                    n[i]=n[i-1]
        return True