class Solution {
public:
    int countConsistentStrings(string al, vector<string>& wrd) {
        char arr[26]={0};
        int a=0;
        for(auto &k:al)
        {
            arr[k-97]=1;
        }
        int z=1;
        for(auto &x:wrd)
        {
            z=1;
            for(auto &xx:x)
            {
                if(arr[xx-97]==0)
                {
                    z=0;
                }
            }
            
            if(z)
            {
                a++;
            }
            
        }
        return a;
    }
};