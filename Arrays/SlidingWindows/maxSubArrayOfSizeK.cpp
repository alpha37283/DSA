#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArrayOfSizeK1(vector<int> &arr, int k, int size) {
        int sum = 0;
        int ans = INT_MIN;

        // First window sum
        for (int x = 0; x < k; x++) {
            sum += arr[x];
        }
        ans = sum;

        int i = 0;
        int j = k - 1;

        while (j < size - 1) {
            j++;
            sum += arr[j];   // add new element
            sum -= arr[i];   // remove old element
            i++;

            ans = max(ans, sum);
        }

        return ans;
    }

    int maxSubArrayOfSizeK2(vector<int> &arr, int k, int size) {
        int sum = 0;
        int ans = INT_MIN;
        int i = 0, j = 0;

        while (j < size) {
            sum += arr[j];  // Add current element to the window

            // If we haven't reached window size yet, just expand
            if (j - i + 1 < k) {
                j++;
            }
            // If we reached window size
            else if (j - i + 1 == k) {
                ans = max(ans, sum); // Check max
                sum -= arr[i];       // Remove the first element of the window
                i++;                 // Move start of window
                j++;                 // Move end of window
            }
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {2, 5, 1, 8, 2, 9, 1};
    int size = arr.size();
    int k = 3;
    Solution obj;
    int ans = obj.maxSubArrayOfSizeK2(arr, k, size);
    cout << ans << endl; // Output: 19 (8+2+9)
    return 0;
}
