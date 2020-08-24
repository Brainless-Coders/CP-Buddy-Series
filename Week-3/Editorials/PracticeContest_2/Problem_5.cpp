SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
    SinglyLinkedListNode* ans = head;
    while(head!=nullptr)
    {
        while(head->next!=nullptr&&head->next->data==head->data)
        {
            head->next=head->next->next;
        }
        head=head->next;
    }
    return ans;
}
