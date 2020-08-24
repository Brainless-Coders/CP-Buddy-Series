bool has_cycle(SinglyLinkedListNode* head) 
{
    int count=0;
    while(head!=nullptr)
    {
        count++;
        head=head->next;
        if(count>1000)
            return true;
    }
    return false;
}
