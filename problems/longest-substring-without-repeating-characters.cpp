#include <iostream>

using namespace std;

class Solution {
public:
    string slice(string s, int from, int to) {
        string subString = "";
        for (int i = from; i < to; i++) {
            subString += s[i];
        }
        return subString;
    }

    int findChar(string s, char c) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c) {
                return i+1;
            }
        }
        return -1;
    }

    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int findResult = findChar(slice(s, l, i), s[i]);
            if (findResult >= 0) {
                l += findResult;
            }

            int len = i - l + 1;
            if (len > ans) {
                ans = len;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;

    string problem;
    cout << "problem: ";
    cin >> problem;

    int ans = sol.lengthOfLongestSubstring(problem);

    cout << ans << endl;

    return 0;
}