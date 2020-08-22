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
    if(head == NULL){
        SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
        return node;
    }
	SinglyLinkedListNode* s = head;
    while(s->next != NULL){
        s = s -> next;
    }
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    s -> next = node;
    return head;
}

/* Credits : Vanamala Srikanth */
