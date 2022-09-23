class Solution {
public:
    vector<int> pivotArray(vector<int>& n, int p) {
        int h=0,a=n.size()-1,low=0,high=n.size()-1,c=0;
        vector<int> arr (n.size(),-1);
        
        while(a>=0)
        {
            if(n[h]<p)
            {
                arr[low++]=n[h];
            }
            if(n[a]>p)
            {
                arr[high--]=n[a];
            }
            if(n[h]==p)
            {
                c++;
            }
            a--;
            h++;
        }
        while(c--)
        {
            arr[low++]=p;
        }
        
        
        
        
        return arr;
        
    }
};