class Solution:
    def garbageCollection(self, gar: List[str], t: List[int]) -> int:
        m,p,g,ans=0,0,0,0
        t.append(0)
        for i in range(len(gar)-1,-1,-1):
            ans+=(p+m+g)*t[i]
            ans+=len(gar[i])
            for j in range(len(gar[i])):
                if(gar[i][j]=='M'):
                    m=1
                
                if(gar[i][j]=='P'):
                    p=1
                
                if(gar[i][j]=='G'):
                    g=1
                
                
        
        return ans
    
    
    
    
# another soln


class Solution:
    def garbageCollection(self, gar: List[str], t: List[int]) -> int:
        m,p,g,ans=0,0,0,0
        for i in range(len(gar)-1,-1,-1):
            for j in range(len(gar[i])):
                if(gar[i][j]=='M'):
                    m=max(m,i)
                if(gar[i][j]=='P'):
                    p=max(p,i)
                if(gar[i][j]=='G'):
                    g=max(g,i)
                ans+=1
                
                
        tt=[0]
        xx=0
        for i in t:
            xx+=i
            tt.append(xx)
        
        if(m>=1):
            ans+=tt[m]
        if(p>=1):
            ans+=tt[p]
        if(g>=1):
            ans+=tt[g]
            
        
            

            
        return ans