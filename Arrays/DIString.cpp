
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low = 0;
        int high = s.size(); // max value
        vector<int> ans;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'D') {
                ans.push_back(high--);
            } else {
                ans.push_back(low++);
        }

        // Last remaining number
        ans.push_back(low); 
        return ans;
    }
};
