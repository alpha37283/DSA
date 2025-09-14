class Solution {
public:
    bool checkPalindrome(string str)   
    {
        int l = 0;
        int r = str.size() - 1;

        while (l < r)   
        {
            if (str[l] == str[r]) {
                l++;
                r--;
            } else {
                return false;
            }
        } 
        return true;
    }

    string firstPalindrome(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            if (checkPalindrome(words[i])) {  
                return words[i];
            }
        }
        return "";
    }
};
