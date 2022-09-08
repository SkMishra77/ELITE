def largestPermutation(k, arr):
    d={}
    idx=0
    n=len(arr)
    for i,j in enumerate(arr):
        if(j not in d ):
            d[j]=i
            
    for i in range(len(arr)):
        if(arr[i]!=n-i):
            if(k>0):
                idx=d[n-i]
                arr[i],arr[idx]=arr[idx],arr[i]
                d[arr[i]]==i
                d[arr[idx]]=idx
                k-=1
            else:
                break
         
        
    return arr