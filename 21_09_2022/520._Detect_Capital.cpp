class Solution {
public:
    bool detectCapitalUse(string word) {
        int upp=0,low=0;
        for(auto ch:word){
            if(isupper(ch)){
                upp++;                
            }
            else{
                low++;
            }
        }
        int n=word.length();
        if(upp==n){
            return true;
        }
        else if(low==n){
            return true;
        }
        else if(isupper(word[0]) && low>=1 && upp==1){
            return true;
        }
        else{
            return false;
        }
    }
};