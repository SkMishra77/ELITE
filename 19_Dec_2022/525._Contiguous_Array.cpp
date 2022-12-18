class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(n+1,0);
        for(int i=1;i<=n;i++){
            if(nums[i-1]==1){
                arr[i] = arr[i-1]+1;
            }else{
                arr[i] = arr[i-1]-1;
            }
        }
        map<int,int> m;
        int ans=0;
        for(int i=0;i<=n;i++){
            if(m.find(arr[i]) != m.end()){
                auto y = abs(m[arr[i]] - i);
                ans=max(ans,y);
            }else{
                m[arr[i]] = i;
            }
        }
        return ans;
    }
};