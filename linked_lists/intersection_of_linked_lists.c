/**
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    
    struct ListNode *a, *b;
    
    /* pointing pointers at heads of linked lists */
    if (headA == NULL || headB == NULL) {return NULL;}
    a = headA;
    b = headB;
    
    while (a != b){    
        if (a == NULL) {
            a = headB;
        } else {
            a = a->next;
        }
        if (b == NULL) {
            b = headA;
        } else {
         b = b->next;
        }
    }
    return (a);
}
