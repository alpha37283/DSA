class Solution
{
public:
    string reverseWords(string s)
    {
        string ans = "";

        reverse(s.begin(), s.end());

        // eulb si yks eht

        string word;
        for (int i = 0; i < s.size(); i++)
        {
            word = "";
            while (i < s.size() && s[i] != ' ')
            {
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if (word.size() != 0)
            {
                ans += " " + word;
            }
        }

        return ans.substr(1);
    }
};