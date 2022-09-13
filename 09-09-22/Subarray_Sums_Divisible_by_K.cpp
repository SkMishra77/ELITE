
class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int n;
        n=arr.size();
        vector<int>ps;
        int sum=0;
        map<int,int> d;
        map<int,int> ::iterator j;
        
        for (int  i = 0; i < n; i++)
        {
            sum+=arr[i];
            ps.push_back(sum);
        }
        for (int i = 0; i < n; i++)
        {
            ps[i]=ps[i]%k;
            if (ps[i]<0)
            {
                ps[i]=k+ps[i];
            }
        }
    
        for (int  i = 0; i < n; i++)
        {
            if(d.find(ps[i])== d.end())
            {
                d[ps[i]]=1;
            }
            else{
                d[ps[i]]++;
            }
        }
        int ans=0;
        for(j=d.begin();j!=d.end();++j)
        {
            if(j->first !=0)
            {
                ans+=((j->second)*(j->second -1))/2;
            }
            else if (j->first ==0 || (k%2==0 && j->first == k/2))
            {
                ans+=((j->second)*(j->second +1))/2;
            }
        }
        return ans;
        
            
    }
};

// satvik soln


class Solution {
public:
    int subarraysDivByK(vector<int>& arr, int k) {
        int n;
        n=arr.size();
        vector<int>ps;
        int sum=0;
        map<int,int> d;
        // map<int,int> ::iterator j;
        
        for (int  i = 0; i < n; i++)
        {
            sum+=arr[i];
            ps.push_back(sum);
            ps[i]=ps[i]%k;
            if (ps[i]<0)
            {
                ps[i]=k+ps[i];
            }
            d[ps[i]]++;
        }

        int ans=0;        
        for(auto j:d)
        {
            if(j.first !=0)
            {
                ans+=((j.second)*(j.second -1))/2;
            }
            else if (j.first ==0 || (k%2==0 && j.first == k/2))
            {
                ans+=((j.second)*(j.second +1))/2;
            }
            
        }
        return ans;
        
            
    }
};