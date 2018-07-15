/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode* pointer = head;
        for(int i=0;i<m-1;i++){
            pointer = pointer->next;
        }
        
        ListNode* array[100000];
        for(int i=0;i<n+1-m;i++){
            array[i] = pointer;
            pointer = pointer->next;
        }
        
    }
};