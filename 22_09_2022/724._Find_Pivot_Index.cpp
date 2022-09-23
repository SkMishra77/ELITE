class Solution {
public:
    int pivotIndex(vector<int>& n) {
        int s=0;
        for(auto x:n)
        {
            s+=x;
        }
        cout<<s<<endl;
        int c=0;
        for(int i=0;i<n.size();i++)
        {
            
            s-=n[i];
            if(c==s)
            {
                return i;
            }
            c+=n[i];
        }
        
        return -1;
    }
};