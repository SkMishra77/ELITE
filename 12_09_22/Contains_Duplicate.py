class Solution:
    def containsDuplicate(self, n: List[int]) -> bool:
        a=set(n)
        if(len(a)==len(n)):
            return False
        else:
            return True