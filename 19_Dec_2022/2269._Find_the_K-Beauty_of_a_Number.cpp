class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string val = to_string(num);
        int cnt=0;
        for(int i=0;i <= val.length()-k; i++){
            string x = substr(val , i ,k);
            int y = stoi(x);
            if( y != 0 && num%y==0){
                cnt++;
            }
        }
        return cnt;
    }
private:
    string substr(string s, int i ,int k){
        string temp = "";
        for(int j=i ; j< i+k; j++){
            temp+=s[j];
        }
        return temp;
    }
};