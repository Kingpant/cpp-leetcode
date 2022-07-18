#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;

        for (int i = 0; i < 32; i++) {
            ans = (ans * 2) + (n % 2);
            n = n >> 1;
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

    uint32_t ans = sol.reverseBits(problem);

    cout << ans << endl;

    return 0;
}