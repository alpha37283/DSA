class Solution
{
public:
    int hIndex(vector<int> &citations)
    {
        // create a new array where store count of papers => # of h[i] paper has i citations
        int n = citations.size();
        vector<int> paper_count(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            paper_count[min(citations[i], n)] += 1;
        }

        int h = n;
        int paper = paper_count[n];

        while (paper < h)
        {
            h -= 1;
            paper += paper_count[h];
        }

        return h;
    }
};