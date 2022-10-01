class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int t=nums[0];
        int c=1;
        int idx=0;
        for (int i=1;i<nums.size();i++)
        {
            if(nums[i]!=t)
            {
                c--;
            }
            else{
                c++;
            }
            
            if(c==0)
            {
                idx=i;
                t=nums[i];
                c=1;
            }
        }
        return t;
    }
};