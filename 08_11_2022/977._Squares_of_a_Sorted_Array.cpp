class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0,j=nums.size()-1,k=nums.size()-1;
        vector<int> ans(nums.size());
        while(k>=0){
            if(sq(nums[i])>sq(nums[j])){
                ans[k--]=sq(nums[i++]);
            }
            else{
                ans[k--]=sq(nums[j--]);
            }
        }
        return ans;
    }
private:
    int sq(int n){
        return n*n;
    }
};