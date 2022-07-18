#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while (n) {
            ans += n & 1;
            n >>= 1;
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    uint32_t problem;
    cout << "problem: ";
    cin >> problem;

    int ans = sol.hammingWeight(problem);

    cout << ans << endl;

    return 0;
}