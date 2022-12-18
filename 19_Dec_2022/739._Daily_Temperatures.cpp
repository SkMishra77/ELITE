class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> ans (n,0);
        for(int i=0;i<n;i++){
            while(st.size() && temperatures[st.top()] < temperatures[i]){
                int idx = st.top();
                ans[idx] = i-idx;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};