class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans= "";
        int i = num1.length()-1;
        int j = num2.length()-1;
        int carry = 0;
        while(i>=0 || j>=0 || carry!=0)
        {
            int ival = i>=0 ? num1.at(i)-'0': 0;
            int jval = j>=0 ? num2.at(j)-'0': 0;
            i--;
            j--;
            int sum = ival + jval + carry;
            ans = to_string(sum%10) + ans;
            carry = sum/10;
        }
        return ans;
    }
};