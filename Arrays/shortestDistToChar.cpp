class Solution {
public:
    vector<int> shortestToChar(string s, char c) {

        vector<int> ans; 
        int n = s.size(); 
        int c_pos = -n;

        for(int i = 0; i<n; i++)
        {
            if(s[i] == c)
            {
                c_pos = i;
            }
            int diff = i - c_pos; 
            ans.push_back(diff);
        }

        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == c)
            {
                c_pos = i;
            }
            ans[i] = min(ans[i], abs(i - c_pos));
        }

        return ans;

    }
};