// https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        // Approach -1:-
        // ListNode* curr = head;

        // int length = 0;

        // while(curr != NULL){
        //     ++length;
        //     curr  = curr->next;
        // }
        // int index = length/2;

        // ListNode *mid =head;


        // while(index--){
        //     mid = mid->next;
        // }
        // return mid;


        // Approach :-2

        ListNode *Tortoies = head;
        ListNode *Rabbit = head;

        while(Rabbit != NULL && Rabbit->next != NULL){ // if they == null the race ends;
            Tortoies = Tortoies->next;
            Rabbit = Rabbit->next->next;
        }
        return Tortoies;
    }
};