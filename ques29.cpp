#include <iostream>
#include <climits>
using namespace std;

int maximumdifferencebetweentwoelements(int arr[], int n)
{
    int suffix[n];

    suffix[n-1] = arr[n-1];

    // Create suffix maximum array
    for(int i=n-2; i>=0; i--)
    {
        suffix[i] = max(suffix[i+1], arr[i]);
    }

    int ans = INT_MIN;

    // Find maximum difference
    for(int i=0; i<n-1; i++)
    {
        ans = max(ans, suffix[i+1] - arr[i]);
    }

    return ans;
}