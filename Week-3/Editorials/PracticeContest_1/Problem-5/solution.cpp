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
    SinglyLinkedListNode* s = head;
    if(position == 0){
        head = head -> next;
        return head;
    }
    int c = 1;
    while(s && c < position){
        s = s -> next;
        c = c + 1;
    }
    if(s != NULL){
        s->next = s -> next -> next;
    }
    return head;
}

// Credits : Vanamala Srikanth
