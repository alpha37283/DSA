class Solution
{
public:
    bool isPalindrome(int x = 1000021)
    {
        bool isPal;

        string num = to_string(x);

        int i = 0;
        while (i < num.length())
        {
            if (num[i] == num[num.length() - i - 1]) // 0,2 1,
            {
                isPal = true;
            }
            else
            {
                isPal = false;
                break;
            }
            i++;
        }

        return isPal;
    }
};