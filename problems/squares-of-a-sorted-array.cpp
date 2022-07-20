#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans;

        int l = 0;
        int r = nums.size() - 1;

        for(int i = 0; i < nums.size(); i++)
        {
            int lSquare = nums[l] * nums[l];
            int rSquare = nums[r] * nums[r];

            if (lSquare > rSquare)
            {
                ans.insert(ans.begin(), lSquare);
                l++;
            }
            else
            {
                ans.insert(ans.begin(), rSquare);
                r--;
            }
        }

        return ans;
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

    vector<int> ans = sol.sortedSquares(problem);

    for (int i : ans)
        cout << i << ' ';

    return 0;
}