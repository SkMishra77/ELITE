class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1=num1.length()-1;
        int n2=num2.length()-1;
        string s="";
        int carry=0;
        
        while(n1>=0 && n2>=0){
            int sum=(num1[n1]-'0')+(num2[n2]-'0')+carry;
            s+=(sum%10)+'0';
            carry=sum/10;
            n1--;
            n2--;
        }
        while(n1>=0){
            if(carry==1){
                int sum=(num1[n1]-'0')+carry;
                s+=(sum%10)+'0';
                carry=sum/10;
            }else{
                s+=num1[n1];
            }
            n1--;
        }
        
        while(n2>=0){
            if(carry==1){
                int sum=(num2[n2]-'0')+carry;
                s+=(sum%10)+'0';
                carry=sum/10;
                
            }else{
                s+=num2[n2];
            }
            n2--;
        }
        if(carry==1)
        {
            s+='1';
        }
        reverse(s.begin(),s.end());
        return s;

    }
};