def absolutePermutation(n, k):
    a=list(range(n+1))
    if(k==0):
        return a[1:]
    if(n%(2*k)!=0):
            return [-1]
    else:
        for i in range(1,n-k+1):
            if abs(a[i]-i)!=k:
                a[i],a[i+k]=a[i+k],a[i]
        return a[1:]
    return a[1:]         