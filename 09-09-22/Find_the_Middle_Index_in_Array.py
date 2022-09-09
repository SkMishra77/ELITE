class Solution:
    def findMiddleIndex(self, n: List[int]) -> int:
        if(len(n)==1):
            return 0
        a=[0]
        s=0
        for i in n:
            s+=i
            a.append(s)
        maxx=a[-1]
        for i in range(0,len(a)-1):
            if(a[i]==maxx-a[i+1]):
                return i
            
            
        return -1