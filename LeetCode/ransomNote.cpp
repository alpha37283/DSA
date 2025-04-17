class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> countChar;

        int count;
        for (int i = 0; i < magazine.size(); i++)
        {
            if (countChar.find(magazine[i]) != countChar.end())
            {
                countChar[magazine[i]] += 1;
            }
            else
            {
                countChar[magazine[i]] = 1;
            }
        }

        for (int j = 0; j < ransomNote.size(); j++)
        {
            if (countChar.find(ransomNote[j]) == countChar.end())
            {
                return false;
            }
            else if (countChar[ransomNote[j]] == 1)
            {
                countChar.erase(ransomNote[j]);
            }
            else
            {
                countChar[ransomNote[j]] -= 1;
            }
        }
        return true;
    }
};