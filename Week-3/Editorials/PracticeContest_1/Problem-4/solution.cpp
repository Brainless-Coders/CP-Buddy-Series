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
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* s = head;
    int c = 1;
    while(s && c < position){
        s = s -> next;
        c = c + 1;
    }
    node->next = s->next;
    s->next = node;
    return head;
}


// Credits : Vanamala Srikanth

