class Solution
{
public:
    string convertToBase7(int num)
    {
        string ans = "";

        int n = abs(num);
        if (n == 0)
        {
            return "0";
        }

        char base7[] = {'0', '1', '2', '3', '4', '5', '6'};

        while (n != 0)
        {
            char curr = base7[n % 7];
            ans = ans + curr;
            n = n / 7;
        }

        if (num < 0)
        {
            // append -1 at the start of the string
            ans += '-';
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};