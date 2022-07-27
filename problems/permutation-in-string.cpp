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

    int findChar(string s, char c, bool isValid[]) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == c && !isValid[i]) {
                return i;
            }
        }
        return -1;
    }

    bool checkInclusion(string s1, string s2) {
        int permSize = s1.size();
        int problemSize = s2.size();
        
        for(int l = 0, r = permSize; r <= problemSize; l++ , r++) {
            bool isProblemValid[permSize];
            for (int i = 0; i < permSize; i++) {
                isProblemValid[i] = false;
            }

            for (int i = 0; i < permSize; i++) {
                int foundIndex = findChar(slice(s2, l, r), s1[i], isProblemValid);
                if (foundIndex < 0) {
                    break;
                }
                isProblemValid[foundIndex] = true;
            }
            for (int i = 0; i < permSize; i++) {
                if (!isProblemValid[i]) {
                    break;
                }
                if (i == permSize - 1) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main()
{
    Solution sol;

    string perm;
    cout << "perm: ";
    cin >> perm;

    string problem;
    cout << "problem: ";
    cin >> problem;

    bool ans = sol.checkInclusion(perm, problem);

    cout << ans << endl;

    return 0;
}