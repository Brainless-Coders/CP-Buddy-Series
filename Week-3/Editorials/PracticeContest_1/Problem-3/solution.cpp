// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
	if(llist == NULL){
        return node;
    }
    node -> next = llist;
    llist = node;
    return llist;
}

// Credits : Vanamala Srikanth
