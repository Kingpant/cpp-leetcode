#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode* pointer = head;
        int len = 0;
        while (pointer != NULL) {
            len++;
            pointer = pointer->next;
        }

        ListNode* ans = head;
        int middle = len / 2;
        while (middle--) {
            ans = ans->next;
        }

        return ans;
    }
};

int main()
{
    Solution sol;

    int num;
    int numSize;

    cout << "nums size: ";
    cin >> numSize;

    ListNode *problem = new ListNode();
    ListNode *pointer = problem;
    for (int i = 0; i < numSize; i++)
    {
        cout << "num"
             << " " << i + 1 << ": ";
        cin >> num;
        pointer->next = new ListNode(num);
        pointer = pointer->next;
    }

    ListNode *ans = sol.middleNode(problem->next);

    cout << ans->val << endl;

    return 0;
}