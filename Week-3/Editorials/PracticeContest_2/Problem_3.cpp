SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
    SinglyLinkedListNode* ans = new SinglyLinkedListNode(0);
    SinglyLinkedListNode* temp = ans;
    while(head1!=nullptr||head2!=nullptr)
    {
        int t1 = 1001;
        int t2 = 1001;
        if(head1!=nullptr)
            t1=head1->data;
        if(head2!=nullptr)
            t2=head2->data;
        if(min(t1,t2)==t1)
        {
            ans->next = new SinglyLinkedListNode(t1);
            ans=ans->next;
            head1=head1->next;
        }
        else
        {
            ans->next = new SinglyLinkedListNode(t2);
            ans=ans->next;
            head2=head2->next;
        }
    }
    return temp->next;
}
