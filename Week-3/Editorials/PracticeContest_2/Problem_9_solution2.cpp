// Complete the reverse function below.

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */
DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    if(head==NULL)
        return head;
    DoublyLinkedListNode* temp = head;
    DoublyLinkedListNode* prev = NULL;
    DoublyLinkedListNode* nx = head;
    
    while(temp->next) {
        nx = temp->next;
        temp->next = prev;
        temp->prev = nx;
        prev = temp;
        temp = temp->prev;
    }
    temp->next = prev;
    temp->prev = NULL;
    head = temp;
    return head;

}