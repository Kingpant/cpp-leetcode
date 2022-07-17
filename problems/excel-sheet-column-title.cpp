#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";

        bool isLongTua = false;
        if (columnNumber % 26 == 0 && columnNumber > 26) {
            columnNumber -= 1;
            isLongTua = true;
        }

        while (columnNumber > 0) {
            if (columnNumber <= 26) {
                ans = char(columnNumber + 64) + ans;
                break;
            }

            if (isLongTua) {
                ans = char(((columnNumber) % 26) + 65) + ans;
            } else {
                ans = char((columnNumber % 26) + 64) + ans;
            }

            columnNumber /= 26;
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    int problem;
    cout << "problem: ";
    cin >> problem;

    string ans = sol.convertToTitle(problem);

    cout << ans << endl;

    return 0;
}