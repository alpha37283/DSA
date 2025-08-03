#include <bits/stdc++.h>
using namespace std;
void moveZeroes(int arr[], int n)
{
    int i = 0, j = 0;

    while (i < n)
    {
        if (arr[i] != 0)
        {
            // If we find a non-zero element, we swap it with the element at index j
            // and increment j to point to the next position for non-zero elements.
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }// Swap arr[i] and arr[j] only if i != j
        i++;
    }
}

int main()
{
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    // Print the result
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}