// Complete the removeDuplicates function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    if(head==NULL) 
        return head;
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* prev = NULL;
    unordered_map<int, int> m1;
    while(temp != NULL) {
        m1[temp->data]++;
        if(m1[temp->data] > 1) {
            m1[temp->data]--;
            prev->next = temp->next;
            temp = temp->next;
        }
        else {
            prev=temp;
            temp = temp->next;
        }
    }
    return head;
}
