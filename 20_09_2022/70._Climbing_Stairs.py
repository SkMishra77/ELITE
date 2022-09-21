class Solution:
    def climbStairs(self, n: int) -> int:
        a=1
        b=2
        z=0
        if(n==1):
            return 1
        if(n==2):
            return 2
        
        for i in range(3,n+1):
            z=a+b
            a=b
            b=z
        return z
            