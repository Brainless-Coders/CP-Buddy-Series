// Complete the sortedInsert function below.

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
DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* n1 = new DoublyLinkedListNode(data);
    DoublyLinkedListNode* temp = head;
    
    if(data < head->data) {
        n1->next = head;
        head->prev = n1;
        head = n1;
        return head;
    }
    
    int flag = 0;
    
    while(temp->data <= data) {
        if(temp->next==NULL) {
            flag=1;
            break;
        }
        else {
            temp = temp->next;
        }
    }
    
    if(flag==1) {
        temp->next = n1;
        n1->prev = temp;
        return head;
    }
    
    temp = temp->prev;
    DoublyLinkedListNode* nx = temp->next;
    
    temp->next = n1;
    n1->prev = temp;
    nx->prev = n1;
    n1->next = nx;
    
    return head;

}