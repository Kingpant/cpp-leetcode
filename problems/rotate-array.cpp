#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end()-(n-k));
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

    int step;
    cout << "step: ";
    cin >> step;

    sol.rotate(problem, step);

    for (int i : problem)
        cout << i << ' ';

    return 0;
}