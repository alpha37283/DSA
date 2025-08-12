class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = 0;
        int r = n - k;
        long long sum = 0;

        
        for (int i = r; i < n; i++) {
            sum += cardPoints[i];
        }

        long long res = sum;

        // we need to check k times (move k cards from right to left)
        while (l < k) {
            sum += cardPoints[l];    // take from left
            sum -= cardPoints[r];    // remove from right
            res = max(res, sum);
            l++;
            r++;
        }

        return (int)res;
    }
};
