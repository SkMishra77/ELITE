def isFibo(n):
    a = 0
    b = 1
    while a<n:
        a,b = b,a+b
    return "IsFibo" if a==n else "IsNotFibo"
