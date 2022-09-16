def sumXor(n):
    c=0
    while(n):
        if(not(n&1)):
            c+=1
        n=n>>1
    return pow(2,c)