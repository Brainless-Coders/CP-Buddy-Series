// Complete the reverse function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    if(head==NULL)
            return head;
    SinglyLinkedListNode*    prev = NULL;
    SinglyLinkedListNode*    curr = head;
    SinglyLinkedListNode*    temp=head;
    while(curr!=NULL) {
        temp  = curr->next;
        curr->next=prev;
        prev = curr;
        curr = temp;
    }
    head = prev;
    return head;

}