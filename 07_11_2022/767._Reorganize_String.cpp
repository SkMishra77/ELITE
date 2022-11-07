class Solution {
public:
    string reorganizeString(string s) {
        struct comparator{
            bool operator()(pair<char,int> &x,pair<char,int> &y){
                return x.second<y.second;
            }
        };
        priority_queue<pair<char,int>,vector<pair<char,int>>,comparator> maxhp;
        map<char,int> m; 
        for(auto x:s){
            m[x]++;
        }
        string ans="";
        for(auto x:m){
            maxhp.push(x);
        }
        while(maxhp.size()>1){
            auto fst=maxhp.top();
            maxhp.pop();
            auto snd=maxhp.top();
            maxhp.pop();
            ans=ans+fst.first+snd.first;
            fst.second--;
            snd.second--;
            if(fst.second>0){
                maxhp.push(fst);
            }
            if(snd.second>0){
                maxhp.push(snd);
            }
        }
        if(maxhp.size()==0){
            return ans;
        }
        else{
            auto aa=maxhp.top();
            maxhp.pop();
            if(aa.second>1){
                return "";
            }
            else{
                return ans+aa.first;
            }
        }
        
        return ans;
    }
};