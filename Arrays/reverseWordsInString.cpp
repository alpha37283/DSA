class Solution {
public:
    string reverseWords(string s) {
        int whitespace;
        int k = 0;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == ' ' || i == s.size() - 1)
            {
                whitespace = (s[i] == ' ') ? i - 1 : i ;
                int l = k;
                int r  = whitespace; 
            
                while(l < r)
                {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }
            k = i + 1; 
            }

           

        }

        return s;
    }
};