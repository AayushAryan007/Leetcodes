/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode(0); // Initialize a dummy node
        ListNode* ptr = result;

        int carry = 0;

        while (l1 != nullptr || l2 != nullptr) {
            int sum = carry;

            if (l1 != nullptr) {
                sum += l1->val; // Use -> to access the value of the ListNode
                l1 = l1->next; // Move to the next ListNode
            }

            if (l2 != nullptr) {
                sum += l2->val; // Use -> to access the value of the ListNode
                l2 = l2->next; // Move to the next ListNode
            }

            carry = sum / 10;
            sum = sum % 10;
            ptr->next = new ListNode(sum); // Create a new ListNode for the result
            ptr = ptr->next; // Move the result pointer to the next ListNode
        }

        if (carry == 1) {
            ptr->next = new ListNode(1); // If there's a remaining carry, add it as a new ListNode
        }

        return result->next; // Skip the dummy node and return the actual result
    }
};



// class Solution {
//  public:
//   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//     ListNode dummy(0);
//     ListNode* curr = &dummy;
//     int carry = 0;

//     while (l1 || l2 || carry) {
//       if (l1 != nullptr) {
//         carry += l1->val;
//         l1 = l1->next;
//       }
//       if (l2 != nullptr) {
//         carry += l2->val;
//         l2 = l2->next;
//       }
//       curr->next = new ListNode(carry % 10);
//       carry /= 10;
//       curr = curr->next;
//     }

//     return dummy.next;
//   }
// };