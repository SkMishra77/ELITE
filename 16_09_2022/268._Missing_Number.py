class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        su=sum(nums)
        n=len(nums)
        n=(n*(n+1))/2
        return int(n-su)
        
        