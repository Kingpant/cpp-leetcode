#include <iostream> 
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int f = 0;
        int l = s.size() - 1;
        while(f < l) {
            char temp = s[f];
            s[f] = s[l];
            s[l] = temp;
            f++;
            l--;
        }
    }
};

int main()
{
    Solution sol;

    char chars;
    int charSize;

    cout << "chars size: ";
    cin >> charSize;

    vector<char> problem;
    for (int i = 0; i < charSize; i++)
    {
        cout << "chars"
             << " " << i + 1 << ": ";
        cin >> chars;
        problem.push_back(chars);
    }

    sol.reverseString(problem);

    for (char i : problem)
        cout << i << ' ';

    return 0;
}