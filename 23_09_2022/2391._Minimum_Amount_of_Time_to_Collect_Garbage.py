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