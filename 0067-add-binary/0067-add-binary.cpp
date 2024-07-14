class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int carry=0;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0 || j>=0 || carry!=0)
        {
            int sum=carry;
            if(i>=0)
            {
                sum=sum+a[i]-'0';
                i--;
            }
            if(j>=0)
            {
                sum=sum+b[j]-'0';
                j--;
            }
            res+=(sum%2)+'0';
            carry=sum/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
