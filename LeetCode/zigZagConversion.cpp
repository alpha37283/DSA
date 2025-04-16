class Solution
{
public:
    string convert(string s, int numRows)
    {
        // if the row is 1 return same string
        if (numRows == 1)
        {
            return s;
        }
        // otherwise
        // for f and l row => numRows - 1 * 2
        // for middle rows => numRows - 1 * 2 - 2 * i
        string res = "";
        int increment = (numRows - 1) * 2;
        for (int i = 0; i < numRows; i++)
        {
            for (int j = i; j < s.size(); j += increment)
            {
                res += s[j];
                int diag = j + increment - 2 * i;
                if (i != 0 && i != numRows - 1 && diag < s.size())
                {
                    res += s[diag];
                }
            }
        }

        return res;
    }
};