class Solution:
    def sortString(self, s: str) -> str:
        d=[0]*26
        ans=""
        for i in s:
            i=ord(i)-97
            d[i]+=1
        print(d)
        l=len(s)
        print(l)
        while(l>0):
            for i in range(0,26):
                if(d[i]>=1):
                    ans+=chr(i+97)
                    d[i]-=1
                    l-=1

            for i in range(25,-1,-1):
                if(d[i]>=1):
                    ans+=chr(i+97)
                    d[i]-=1
                    l-=1
        return ans
                  
            
                    
            
                
        