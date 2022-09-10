class Solution {
public:
    int findMiddleIndex(vector<int>& n) {
        int si=n.size();
        vector<int> ps ;
        ps.push_back(0);
        int sum=0;
        for(int i=0;i<si;i++)
        {
            sum+=n[i];
            ps.push_back(sum);
        }
        for (int i=0;i<si;i++)
        {
            if(ps[i]==sum-ps[i+1])
            {
                return i ;
            }
        }
        return -1;
    }
};