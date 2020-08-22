// Complete the deleteNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    if(head == NULL) {
        return head;
    }
    SinglyLinkedListNode* temp = head;
    if(position==0) {
        head = head->next;
        free(temp);
        return head;
    }
    for(int i=0;i<position-1;i++) {
        temp = temp->next;
    }
    SinglyLinkedListNode* temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
    return head;
}