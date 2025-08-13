class Solution {
public:
    string checkPalind(int i, int j, const string &s)
    {
        int start = 0;
        int leng = 0;

        while (i >= 0 && j < s.size() && s[i] == s[j])
        {
            if (j - i + 1 > leng)
            {
                leng = j - i + 1;
                start = i;
            }
            i--;
            j++;
        }
        return s.substr(start, leng);
    }

    string longestPalindrome(string s) 
    {
        string ans = "";
        for (int i = 0; i < s.size(); i++)
        {
            // Odd length palindrome
            string oddAns = checkPalind(i, i, s);
            if (oddAns.size() > ans.size()) ans = oddAns;

            // Even length palindrome
            string eveAns = checkPalind(i, i + 1, s);
            if (eveAns.size() > ans.size()) ans = eveAns;
        }
        return ans;
    }
};
