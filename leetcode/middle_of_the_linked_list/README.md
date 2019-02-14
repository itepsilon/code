# Middle of the Linked List
## Problem Statement

Given a non-empty, singly linked list with head node head, return a middle node of linked list. If there are two middle nodes, return the second middle node.

### Input

Given head pointing the first ListNode.

### Output

Return middle ListNode.

## Solution I

### Explanation

We initialize two pointers pointing to the first ListNode: slow and fast. For each iteration, we advance slow pointer by one and fast pointer by two until fast pointer can't advance anymore. Therefore, slow pointer will point to middle of the singly linked list.

### Implementation

```cpp
#include <vector>
using namespace std;

// Definition for singly-linked list.
// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode(int x) : val(x), next(NULL) {}
// };

class Solution {
 public:
  ListNode *middleNode(ListNode *head) {
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }
};
```

### Time & Space complexity
* Time: O(n)
* Space: O(1)

