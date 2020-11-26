

/**
 *
 * https://leetcode.com/problems/linked-list-cycle/
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    
    struct ListNode *h, *t;
    
    if (!head || !head->next) {return false;}
    
    h = head;
    t = head;
    
    while (h->next && h->next->next) {
        h = h->next->next;
        t = t->next;
        
        if (h == t) {
            t = head;
            while (h != t) {
                t=t->next;
                h=h->next;
            }
            return (true);
        }
    }
    return (false);
    
}
