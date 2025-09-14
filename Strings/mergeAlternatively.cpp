class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.size(); 
        int m = word2.size();

        string merg = ""; 

        int i = 0;
        int j = 0; 

        while (i < n && j < m) {
            merg += word1[i]; 
            i++; 
            merg += word2[j];
            j++;
        }

        while (i < n) {
            merg += word1[i];
            i++;
        }

        while (j < m) {
            merg += word2[j];
            j++;
        }

        return merg;
    }
};
