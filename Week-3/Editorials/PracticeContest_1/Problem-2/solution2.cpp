// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* n1 = new SinglyLinkedListNode(data);
    if(head==NULL) {
        head = n1;
        return head;
    }
    SinglyLinkedListNode* temp=head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n1;
    return head;
}