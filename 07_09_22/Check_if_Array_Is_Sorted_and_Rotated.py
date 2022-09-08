class Solution:
    def check(self, arr: List[int]) -> bool:
        n=len(arr)
        c=0
        for i in range(0,n):
            if(arr[i]>arr[(i+1)%n]):
                c+=1
        if(c<=1):
            return True
        else:
            return False
        