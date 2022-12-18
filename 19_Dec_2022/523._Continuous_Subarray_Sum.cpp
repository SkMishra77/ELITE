class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> arr ;
        arr.push_back(0);
        for(int i=1; i<=n ;i++){
            auto y = arr[i-1] + nums[i-1];
            y %= k;
            if(y<0){
                y+=k;
            }
            arr.push_back(y);
        }
        for(auto x:arr){
            cout<<x<<"  ";
        }
        map<int,int> m;
        for(int i=0;i<=n;i++){
            if(m.find(arr[i]) != m.end()){
                if( abs(m[arr[i]] - i) >1) return true;
            }
            else{
                m[arr[i]] = i;
            }
        }
        return 0;
    }
};