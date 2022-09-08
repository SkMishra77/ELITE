class Solution {
public:
    bool canBeIncreasing(vector<int>& n) {
        int f=0;
        for(int i=1;i<n.size();i++)
        {
            if(n[i-1]>=n[i])
            {
                if(f)
                {
                    return false;
                }
                f=1;
                if(i>1 && (n[i-2]>=n[i]))
                {
                    n[i]=n[i-1];
                }
                    
            }
        }
        return true;
        
    }
};