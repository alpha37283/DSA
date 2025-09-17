class Solution {
public:
    void sortColors(vector<int>& nums) {
        // counts for 0,1,2
        int count[3] = {0, 0, 0};

        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]++;
        }

        int j = 0;
        for (int k = 0; k < count[0]; k++) nums[j++] = 0;
        for (int k = 0; k < count[1]; k++) nums[j++] = 1;
        for (int k = 0; k < count[2]; k++) nums[j++] = 2;
    }
};
