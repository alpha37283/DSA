class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int i = 0;              
        int j = 0;  
        int sum = 0;
        int count = 0;

        
        while (j < k) {
            sum += arr[j];
            j++;
        }

    
        if (sum / k >= threshold) {
            count++;
        }

    
        while (j < n) {
            sum += arr[j];   
            sum -= arr[i];   
            i++;
            j++;

            if (sum / k >= threshold) {
                count++;
            }
        }

        return count;
    }
};
