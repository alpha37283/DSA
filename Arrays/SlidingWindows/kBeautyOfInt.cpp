class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);  // convert to string
        int kb = 0;

        for (int i = 0; i <= s.size() - k; i++) {
            string str = s.substr(i, k); // get k-length substring
            int curr = stoi(str);        // convert to integer

            if (curr != 0 && num % curr == 0) { // check nonzero & divides num
                kb++;
            }
        }

        return kb;
    }
};
