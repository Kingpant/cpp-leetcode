#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        while (l != r) {
            if (nums.at((l + r) / 2) == target) {
                return (l + r) / 2;
            } else if (nums.at((l + r) / 2) > target) {
                r = (l + r) / 2;
            } else {
                l = ((l + r) / 2) + 1;
            }
        }

        if (nums.at(l) == target) {
            return l;
        }
        
        return -1;
    }
};

int main()
{
    Solution sol;

    int nums;
    int numsSize;

    cout << "nums size: ";
    cin >> numsSize;

    vector<int> problem;
    for (int i = 0; i < numsSize; i++){
        cout << "nums" << " " << i + 1 << ": ";
        cin >> nums;
        problem.push_back(nums);
    }

    int target;
    cout << "target: ";
    cin >> target;

    int ans = sol.search(problem, target);

    cout << ans << endl;

    return 0;
}