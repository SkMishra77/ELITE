class Solution:
    def majorityElement(self, n: List[int]) -> int:
        d={}
        for i in n:
            if(i not in d):
                d[i]=1
            else:
                d[i]+=1
        for i,j in d.items():
            if(j>(len(n)/2)):
                return i