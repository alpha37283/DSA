class Solution {
public:
    void insert(vector<int> &arr, int i, int j) {
        if (j < arr.size()) {
            arr[j] = arr[i];
        }
    }

    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int zeros = 0;

        // Count zeros
        for (int x : arr) {
            if (x == 0) zeros++;
        }

        // Two pointers: i = original index, j = virtual index
        int i = n - 1;
        int j = n - 1 + zeros;

        while (i < j) {
            insert(arr, i, j);
            if (arr[i] == 0) {
                j--;
                insert(arr, i, j);
            }
            i--;
            j--;
        }
    }
};