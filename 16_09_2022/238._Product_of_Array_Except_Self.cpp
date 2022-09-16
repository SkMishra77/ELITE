class Solution {
public:
    vector<int> productExceptSelf(vector<int>& n) {
        
        vector<int> left {1};
        vector<int> right {1};
        
        int x=1,y=1;
        for(int i=0,j=n.size()-1;i<n.size();i++,j--)
        {
            x*=n[i];
            y*=n[j];
            left.push_back(x);
            right.push_back(y);
        }
        reverse(right.begin(),right.end());
        for(int i=0;i<left.size();i++)
        {
            cout<<left[i]<<"    "<<right[i]<<endl;;
        }
        
        n.clear();
        
        for(int i=1;i<right.size();i++)
        {
            n.push_back(left[i-1]*right[i]);
        }
        return n;
    }
};