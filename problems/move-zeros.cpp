#include <iostream> 
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastSeenNonZero = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[lastSeenNonZero++]);
            }
        }
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
    for (int i = 0; i < numsSize; i++)
    {
        cout << "nums"
             << " " << i + 1 << ": ";
        cin >> nums;
        problem.push_back(nums);
    }

    sol.moveZeroes(problem);

    for (int i : problem)
        cout << i << ' ';

    return 0;
}