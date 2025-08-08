class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // (two pointers
        // sort both arrays
        sort(s.begin(), s.end());
        sort(g.begin(), g.end());

        int i = 0;
        int j = 0; 

        // i for g (children), j for s (cookies)
        // while there are still children to satisfy
        while(i < g.size())
        {
            // while there are still cookies to check
            // and the greed factor of the child is greater than the size of the cookie
            // we have to find a lareger cookie
            while(j < s.size() && g[i] > s[j])
            {
                j++;
            }
            // if we found a cookie that satisfies the child's greed factor
            // that is if we have not went through all cookies means there are cookies left
            // and the current cookie satisfies the child's greed factor
            // we can assign this cookie to the child
            if(j < s.size())
            {
                i++;
                j++;
            }
            else
            {
                // if we have no more cookies left to check
                // we can break out of the loop
                break; 
            }
        }

        return i; 
    }
};