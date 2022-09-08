a=list(map(int,input().split()))
for i in range(len(a)-1):
    if((i%2==0 and a[i]>a[i+1]) or (i%2==1 and a[i]<a[i+1])):
        a[i],a[i+1]=a[i+1],a[i]
print(a)