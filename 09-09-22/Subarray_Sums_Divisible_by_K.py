class Solution:
    def subarraysDivByK(self, n: List[int], k: int) -> int:
        ps=[]
        s=0
        d={}
        ans=0
        for i in n:
            s+=i
            ps.append(s)
        
        a=[i%k for i in ps]
        for i in a:
            if(i not in d):
                d[i]=1
            else:
                d[i]+=1
        for i in d:
            if(i!=0):
                ans+=(d[i]*(d[i]-1))/2
            elif(i==0):
                ans+=(d[i]*(d[i]+1))/2
            elif(k%2==0 and (k/2) in d):
                ans+=(d[i]*(d[i]+1))/2
                
        return int(ans)
        
#this combination is a outcome of others 2 ques in same directory.