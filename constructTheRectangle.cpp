class Solution
{
public:
    vector<int> constructRectangle(int area)
    {
        vector<int> ans;

        int s = sqrt(area);
        int i = s;
        int w;

        while (i >= 1 && area % i != 0)
        {
            i--;
        }

        w = i;

        int l = area / w;

        ans.push_back(l);
        ans.push_back(w);

        return ans;
    }
};