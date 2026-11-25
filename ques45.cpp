#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(string s) {

    int n = s.size();
    int ans = 0;

    for (int start = 0; start < n; start++) {

        int end = start;
        bool duplicate = false;

        while (end < n) {

            for (int i = start; i < end; i++) {
                if (s[i] == s[end]) {
                    duplicate = true;
                    break;
                }
            }

            if (duplicate)
                break;
//ans stores the maximum length of a valid substring found so far
//Why +1?
//Because indexing starts from 0, and we have to count both the starting and ending positions.
//- ans = Previously found maximum length.
// end - start + 1 = Current substring length.
//It stores whichever is bigger.
            ans = max(ans, end - start + 1);
            end++;
        }
    }

    return ans;
}

int main() {
    string s = "abcdecbeadf";

    cout << lengthOfLongestSubstring(s);

    return 0;
}


