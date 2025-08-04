#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        for(int i = 0; i<n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue; 
            }

            int j = i + 1;
            int k = n - 1;

            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];

                if(sum < 0)
                {
                    j++;
                }
                else if(sum > 0)
                {
                    k--;
                }
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1])
                    {
                        j++;
                    }
                }
            }


        }

    return ans;
        

    }
};
// -------- optimal 
/*
sort the nums 

run the loop1 for first value assume i is first value 

avoid the continue values like -1 -1 -1 0  => for i 

two pointers technique
run the while j < k j is i + 1 and k is n - 1 extreme end 
if we found a sum larger then 0
k--
if we found sum less then 0
j++
else 
ans found push it to the triplet 

avoid the continues values for j as well
-1 0 0 0 avoid 0 here => j 



*/





// ----------------better approach

        // loop 1 first target => a = -nums[i]

        // find two other number such that the equals target 1 
        // c target = a - nums[j]

        // find it in set se like if(s.find(c target) != end)

void solution()
{

    vector<vector<int>> uniqueTrips;

    for(int i = 0; i<n ; i++)
    {
         int a = - nums[i];

         vector<int> temp;

         for(int j = i + 1; j<n ; j++)
         {
            int b = a - nums[j];

            if(temp.find(b) != temp.end())
            {
                vector<int> triple = {nums[i], nums[j], b};
                sort(triple.begin(), triple.end());
                uniqueTrips.insert(triple);
            }

            s.insert(nums[j]); 
         }
    }

    vector<vector<solution>> ans(uniqueTrips.begin(), uniqueTrips.end()); 
}
int main ()
{


}