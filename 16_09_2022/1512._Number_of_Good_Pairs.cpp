class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> d;
        int res=0;
        for(auto &x:nums)
        {
            res+=d[x]++;
        }
        return res;
    }
};