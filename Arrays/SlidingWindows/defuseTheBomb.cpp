class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> res(n, 0);
        if (k == 0) return res;

        int l = 0;
        int sum = 0;

        for (int r = 0; r < n + abs(k); r++) {
            sum += code[r % n];

            if (r - l + 1 > abs(k)) {
                sum -= code[l % n];
                l = (l + 1) % n;
            }

            if (r - l + 1 == abs(k)) {
                if (k > 0) {
                    res[(l - 1 + n) % n] = sum;
                } else { // k < 0
                    res[(r + 1) % n] = sum;
                }
            }
        }
        return res;
    }
};
