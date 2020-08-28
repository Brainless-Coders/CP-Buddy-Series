// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp = head1;
    SinglyLinkedListNode* newhead;
    if(head1->data <=  head2->data) {
        temp = head1;
        head1=head1->next;
    }
    else {
        temp = head2;
        head2 = head2->next;
    }
    newhead = temp;
    
    while(head1!=NULL && head2!=NULL) {
        if(head1->data <= head2->data) {
            temp->next = head1;
            head1=head1->next;
            temp = temp->next;
        }
        else {
            temp->next = head2;
            head2=head2->next;
            temp = temp->next;
        }
    }
    
    while(head1!=NULL) {
        temp->next = head1;
        head1=head1->next;
        temp = temp->next;
    }

    
    while(head2!=NULL) {
        temp->next = head2;
        head2=head2->next;
        temp = temp->next;
    }
    
    temp ->next = NULL;
    return newhead;
}