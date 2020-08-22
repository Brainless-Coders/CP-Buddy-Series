// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data);
    if(position == 0) {
        temp->next = head;
        head = temp;
        return head;
    }
    SinglyLinkedListNode* temp2 = head;
    for(int i=0;i<position-1;i++) {
        temp2 = temp2->next;
    }
    temp ->next = temp2->next;
    temp2->next = temp;
    return head;
}