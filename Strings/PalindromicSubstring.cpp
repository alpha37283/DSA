class Solution {
public:
    int countPalindrom(int i, int j, string s) {
        int count = 0;

        while (i >= 0 && j < s.size() && s[i] == s[j]) {
            count += 1;
            i--;
            j++;
        }

        return count;
    }

    int countSubstrings(string s) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {

            ans += countPalindrom(i, i, s);
            ans += countPalindrom(i, i + 1, s);
        }

        return ans;
    }
};
