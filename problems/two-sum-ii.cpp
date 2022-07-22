#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for (int i = 0; i < numbers.size()-1; i++) {
            int l = i;
            int r = numbers.size();
            int toFind = target - numbers[i];
            int toFindIndex = 0;
            while (l != r) {
                if (numbers.at((l + r) / 2) == toFind) {
                    toFindIndex = (l + r) / 2;
                    l = r;
                } else if (numbers.at((l + r) / 2) > toFind) {
                    r = (l + r) / 2;
                } else {
                    l = ((l + r) / 2) + 1;
                }
            }
            if (toFindIndex != 0) {
                ans.push_back(i+1);
                ans.push_back(toFindIndex+1);
                return ans;
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

    int target;
    cout << "target: ";
    cin >> target;

    vector<int> ans = sol.twoSum(problem, target);

    for (int i : ans)
        cout << i << ' ';

    return 0;
}