class Solution {
public:
    
    struct comparator {
            bool operator()(const vector<int> &x,const  vector<int> &y) {
                return dist(x[0],x[1])<dist(y[0],y[1]);
            }
        };
    
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue <vector<int>, vector<vector<int>>, comparator> max_hp;
        
        for(auto y:points){
            max_hp.push(y);
            if(max_hp.size()==k+1){
                max_hp.pop();
            }
        }
        vector<vector<int>> ans;
        while(!max_hp.empty()){
            ans.push_back(max_hp.top());
            max_hp.pop();
        }
        return ans;
    }
    
    int dist(int x,int y){
        return (x*x)+(y*y);
    }
};