class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int j=0;
        double sum=0;
        double ans=INT_MIN;
        for(int i = 0; i < n; i++) {
            if(i < k) {
                sum+=nums[i];
                continue;
            }
            cout<<sum<<endl;
            ans = max(ans, sum/k);
            sum+= (nums[i] - nums[j++]);
            ans = max(ans, sum/k);
        }
        ans = max(ans, sum/k);
        return ans;
    }
};