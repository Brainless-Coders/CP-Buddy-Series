int getNode(SinglyLinkedListNode* head, int positionFromTail) 
{
    int count=0;
    SinglyLinkedListNode* temp = head;
    while(head!=nullptr)
    {
        count++;
        head=head->next;
    }
    positionFromTail =count-positionFromTail;
    count=0;
    while(true)
    {
        count++;
        if(count==positionFromTail)
            return temp->data;
        temp=temp->next;
    }
}
