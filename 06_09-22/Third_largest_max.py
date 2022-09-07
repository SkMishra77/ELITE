class Solution:
    def thirdMax(self, n: List[int]) -> int:
        # n=set(n)
        f=-9223372036854775808
        s=-9223372036854775808
        t=-9223372036854775808
        for i in n:
            if(i==f or i==s or i==t):
                continue
            if(i>f):
                t=s
                s=f
                f=i
                print(f,s,t)
            elif(i>s):
                t=s
                s=i
                print(f,s,t)
            elif (i>t):
                t=i
                print(f,s,t)
        if(-9223372036854775808==t):
            return f
        return t