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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* pointer1 = new ListNode(0);
        pointer1->next = head;
        ListNode* pointer2 = pointer1;

        while (pointer1 != NULL) {
            if (n < 0) {
                pointer2 = pointer2->next;
            }
            pointer1 = pointer1->next;
            n--;
        }

        if (pointer2->next == head) {
            head = head->next;
            pointer2->next = pointer2->next->next;
        } else {
            pointer2->next = pointer2->next->next;
        }

        return head;
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

    int end;
    cout << "end: ";
    cin >> end;

    ListNode *ans = sol.removeNthFromEnd(problem->next, end);

    while (ans != NULL) {
        cout << ans->val << endl;
        ans = ans->next;
    }

    return 0;
}