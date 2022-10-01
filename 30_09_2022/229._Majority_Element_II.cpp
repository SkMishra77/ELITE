class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int >ans;
        int a=INT_MIN,b=INT_MIN,c1=0,c2=0;
        for(auto x:nums)
        {
            if(a==x)
            {
                c1++;
            }
            else if(b==x)
            {
                c2++;
            }
            else if(c1==0)
            {
                a=x;
                c1=1;
            }
            else if(c2==0)
            {
                b=x;
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0,c2=0;
        for(auto x:nums)
        {
            if(x==a){
                c1++;
            }
            if(x==b){
                c2++;
            }
        }
        
        if(c1>(nums.size())/3)
        {
            ans.push_back(a);
        }
        if(c2>(nums.size())/3)
        {
            ans.push_back(b);
        }
        
        return ans;
    }
};