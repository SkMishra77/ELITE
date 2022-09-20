class Solution:
    def decodeMessage(self, key: str, message: str) -> str:
        d={}
        ans=""
        alp='a'
        for i in key:
            if(i!=" " and i not in d):
                d[i]=alp
                alp=chr(ord(alp)+1)
        print(d)
        for i in message:
            if(i!=" "):
                ans+=d[i]
            else:
                ans+=" "
        return ans
                
            
        