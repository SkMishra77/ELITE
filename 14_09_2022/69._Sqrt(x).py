class Solution:
    def mySqrt(self, x: int) -> int:
        i=1
        j=x
        ans=0
        if(x==0 or x==1):
            return x
        
        while(i<=j):
            mid=(i+j)//2
            if(mid*mid==x):
                return mid
            elif(mid*mid>x):
                j=mid-1
            elif(mid*mid<x):
                ans=mid
                i=mid+1
        return ans
                