class Solution {
public:
    int numberOfSteps(int n) {
        int c=0;
        while(n>0)
        {
            if(n==1)
            {
                c+=1;
            }
            else if(n%2==0)
            {
                c+=1;
            }
            else
            {
                c+=2;
            }
            n=n>>1;
        }
    
        return c;
    }
};