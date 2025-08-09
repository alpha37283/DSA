class Solution {
public:
    string reverseStr(string s, int k) {
    
        for(int it = 0; it < s.size(); it += 2 * k)
        {
            int i = it;
            int j = min(it + k - 1, (int)s.size() - 1);
            while(i < j)
            {
                swap(s[i], s[j]);
                i+=1;
                j-=1;
            }
        }

        return s; 
    }
};