class Solution {
public:
    int maximumDifference(vector<int>& n) {
        int  zz=INT_MAX;
        int res=-1;
        for (int i=0;i<n.size();i++)
        {
            zz=min(zz,n[i]);
            if(n[i]>zz)
            {
                res=max(res,n[i]-zz);
            }
        }
        return res;
            
    }
};