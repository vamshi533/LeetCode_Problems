// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */



// class Solution {
// public:
//     ListNode* mergeNodes(ListNode* head) {
//         ListNode* newNode = new ListNode();
//         ListNode* p = newNode;
//         ListNode* temp = head;
//         ListNode* arr = head;
//         while (arr->next != nullptr) {
//             int s = 0;
//             if (temp->val == 0) {
//                 temp = temp->next;
//                 while (temp->val != 0) {
//                     s = s + temp->val;
//                     temp = temp->next;
//                 }
//                 ListNode* ptr = new ListNode();
//                 ptr->val = s;
//                 p->next = ptr;
//                 p = p->next;
//             }
//             arr = temp;
//         }
//         newNode = newNode->next;
//         return newNode;
//     }
// };


class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* newNode = new ListNode();
        ListNode* p = newNode; 

        ListNode* current = head->next;
        int sum = 0;

        while (current != nullptr) {
            if (current->val != 0) {
                sum += current->val;
            } else {
                p->next = new ListNode(sum); 
                p = p->next;
                sum = 0;
            }
            current = current->next;
        }

        return newNode->next;
    }
};

