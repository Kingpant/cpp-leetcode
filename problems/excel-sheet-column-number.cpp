#include <iostream>
#include <vector>
#include<cmath>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;

        for (char c : columnTitle) {
            int pos = c - 'A' + 1;
            ans = ans * 26 + pos;
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    string problem = "";
    cout << "problem: ";
    cin >> problem;

    int ans = sol.titleToNumber(problem);

    cout << ans << endl;

    return 0;
}