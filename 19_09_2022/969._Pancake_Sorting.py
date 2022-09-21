
def flip(arr,k):
    arr[:k] = arr[k-1::-1]
    return arr

def findele(arr,k):
    return arr.index(k)+1
class Solution:
    

    
    def pancakeSort(self, arr: List[int]) -> List[int]:
        end=len(arr)
        ans=[]
        idx=0
        while(end>1):
            idx=findele(arr,end)
            print("idx=",idx)
            ans.append(idx)
            arr=flip(arr,idx)
            arr=flip(arr,end)
            print("end==",end)
            ans.append(end)
            end-=1
            
        return ans
            