class Solution
{
public:
    string addStrings(string num1, string num2)
    {
        int i = num1.size() - 1;
        int j = num2.size() - 1;

        int curr1;
        int curr2;
        int carry = 0;
        int sum = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry)
        {
            curr1 = 0;
            curr2 = 0;
            if (i >= 0)
            {
                curr1 = num1[i] - '0';
                i--;
            }

            if (j >= 0)
            {
                curr2 = num2[j] - '0';
                j--;
            }

            sum = curr1 + curr2 + carry;
            carry = sum / 10;

            ans += (sum % 10) + '0';
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};