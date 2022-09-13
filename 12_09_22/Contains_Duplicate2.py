class Solution:
    def containsNearbyDuplicate(self, n: List[int], k: int) -> bool:
        d={};
        for i in range(len(n)):
            if(n[i] not in d):
                d[n[i]]=i
            else:
                if(abs(d[n[i]]-i)<=k):
                    return True
            d[n[i]]=i
        return False