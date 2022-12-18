class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        int s = 0;
        int n=nums.size();
        int ans = 0;
        for(int i = 0 ;i < n ;i++){
            s+=nums[i];
            if(s==k){
                ans+=1;
            }
            if(m.find(s-k) != m.end()){
                ans+=m[s-k];
            }
            m[s]++;
        }
        return ans;
    }
};