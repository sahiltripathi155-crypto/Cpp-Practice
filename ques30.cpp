//SOLVING 3SUM QUESTION BY USING BINARY SEARCH
//TIME COMPLEXITY IN THIS O(n^2logn)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {

    vector<vector<int>> ans;
    int n = nums.size();

    // Step 1: Sort the array
    sort(nums.begin(), nums.end());

    // Step 2: Fix first element
    for (int i = 0; i < n - 2; i++) {

        // Skip duplicate first elements
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        // Step 3: Fix second element
        for (int j = i + 1; j < n - 1; j++) {

            // Skip duplicate second elements
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            // Step 4: Find required third element
            int required = -(nums[i] + nums[j]);

            // Step 5: Binary search
            int start = j + 1;
            int end = n - 1;

            while (start <= end) {

                int mid = start + (end - start) / 2;

                if (nums[mid] == required) {
                    ans.push_back({nums[i], nums[j], required});
                    break;
                }
                else if (nums[mid] < required) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
    }

    return ans;
}

int main() {

    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans = threeSum(nums);

    for (auto triplet : ans) {
        cout << "[ ";
        for (int x : triplet) {
            cout << x << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}