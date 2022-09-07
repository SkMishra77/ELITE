from math import inf
class Solution:
    def maximumDifference(self, n: List[int]) -> int:
        zz=inf
        res=-1
        for i in n:
            zz=min(zz,i)
            if(i>zz):
                res=max(res,i-zz)
        return res
            