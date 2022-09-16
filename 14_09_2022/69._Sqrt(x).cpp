class Solution {
public:
    int mySqrt(int x) {
        long long int i=0;
        long long int j=x;
        long long int ans=0;
        long long int mid=i+(j-i)/2;
        if(x==0 || x==1)
        {
            return x;
        }
        
        while(i<=j)
        {
            mid=i+(j-i)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                j=mid-1;
            else
            {
                ans=mid;
                i=mid+1;
            }
            
        }
        return ans;
    }
};