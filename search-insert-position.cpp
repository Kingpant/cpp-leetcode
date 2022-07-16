#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size();

        while (l != r) {
            if (nums.at((l + r) / 2) == target){
                return (l + r) / 2;
            }else if (nums.at((l + r) / 2) > target){
                r = (l + r) / 2;
            } else {
                l = ((l + r) / 2) + 1;
            }
        }
        return r;
    }
};

int main()
{
    Solution sol;

    vector<int> problem{ 1, 2, 4, 5 };
    int ans = sol.searchInsert(problem, 2);

    cout << ans << endl;

    return 0;
}