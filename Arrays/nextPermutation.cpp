class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // finding a pivot 
        // start from end and first 

        int n = nums.size();
        
        int piv = -1;

        for(int i = n - 2; i>=0 ;i--) // o(n)
        {
            if(nums[i] < nums[i + 1]) // in case of array which is descreasing order 5 4 3 2 1 this condition wll never met 
            {
                piv = i;
                break;
            }
        }

        if(piv == -1)
        {
            sort(nums.begin(), nums.end());
            return ; 
        }

        // find the right most value greater then pivot 

        for(int i = n - 1; i>piv; i--)
        {
            if(nums[i] > nums[piv])
            {
                swap(nums[i], nums[piv]);
                break;
            }
        }

        // reverse piv + 1, n - 1 

        int l = piv + 1;
        int r = n - 1;
        while(r >= l)
        {
            swap(nums[l], nums[r]);
            l++;
            r--; 
        }

    }
};

/*

find a pivot 
12453
 *
find just the next largest value to the pivot
that is 3
replace it with pivot 
13542

reverse upto pivot + 1 to n - 1 
13245 

*/