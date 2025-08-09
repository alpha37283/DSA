class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int sum = 0;
        double ans = 0;
        while(j < k)
        {
            sum += nums[j];
            j++;
        }

         ans = sum / (double)k; 
        

        while(j < nums.size())
        {
            sum+=nums[j];
            sum-=nums[i];
            j++;
            i++;
            ans = max(sum / (double)k , ans);
        }

        return ans; 
    }



};