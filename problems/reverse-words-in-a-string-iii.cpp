#include <iostream> 
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        int l = 0;
        int r = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                r = i;
                while (l < r) {
                    char temp = s[l];
                    s[l] = s[r-1];
                    s[r-1] = temp;
                    l++;
                    r--;
                    if (l >= r-1) {
                        l = i + 1;
                    }
                }
            }
        }

        r = s.size()-1;

        while (l < r) {
            char temp = s[l];
            s[l] = s[r];
            s[r] = temp;
            l++;
            r--;
        }        

        return s;
    }
};

int main()
{
    Solution sol;

    string problem;

    cout << "problem: ";
    getline(cin, problem);

    string ans = sol.reverseWords(problem);

    cout << ans << endl;

    return 0;
}