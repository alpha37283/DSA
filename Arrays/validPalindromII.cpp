class Solution {
public:
    bool isPalindrom(const string &s,int  l,int r)
    {
        while(l < r)
        {
            if(s[l] != s[r])
            {
                return false; 
            }
            l++;
            r--; 
        }

        return true; 
    }

    bool validPalindrome(string s) {
        bool ans;
        int l = 0;
        int r = s.size() - 1;
        // ignoe one character from either end and check if the remaining string is a palindrome
        // if it is then return true else return false
        // means if one of charachter can be neglected then it is a valid palindrome
        while(l < r)
        {
            if(s[l] != s[r])
            {
                return isPalindrom(s ,l + 1, r) || isPalindrom(s , l , r - 1);
                
            }
            l++; 
            r--;
                 
        }

        return true;
    }
};