class Solution:
    def maximumProduct(self, n: List[int]) -> int:
        n.sort()
        if(n[-1]<0):
            return n[-1]*n[-2]*n[-3]
        else:
            return (max(n[0]*n[1],n[-2]*n[-3])*n[-1])
        