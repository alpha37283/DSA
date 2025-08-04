#include<bits/stdc++.h>
using namespace std;
void solution()
{
    vector<vector<solution>> ans; 

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
}
int main ()
{


}