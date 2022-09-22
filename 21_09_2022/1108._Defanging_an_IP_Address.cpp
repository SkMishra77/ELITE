class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        for(auto ch:address){
            if(ch=='.'){
                s+="[.]";
            }
            else{
                s+=ch;
            }
        }
        
        return s;
        
    }
};