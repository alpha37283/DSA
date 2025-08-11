class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1; 
        
        vector<int> res(j + 1); 
        int k = res.size() - 1; 

        while( i <= j)
        {
            int isq = nums[i] * nums[i];
            int jsq = nums[j] * nums[j];
            if(jsq > isq)
            {
                res[k] = jsq; 
                j--;
                k--;
            }
            else
            {
                res[k] = isq; 
                i++; 
                k--;
            }
        }

    return res; 

    }
};