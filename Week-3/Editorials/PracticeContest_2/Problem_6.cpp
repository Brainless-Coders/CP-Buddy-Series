int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2)
{
    int count1=0,count2=0;
    SinglyLinkedListNode* temp = head1;
    while(head1!=nullptr)
    {
                count1++;
        head1=head1->next;
    }
    head1=temp;
    temp=head2;
    while(head2!=nullptr)
    {
                count2++;
        head2=head2->next;
    }
    head2=temp;
    while(count1>count2)
    {
        head1=head1->next;
        count1--;
    }
    while(count2>count1)
    {
        head2=head2->next;
        count2--;
    }
    while(true)
    {
        if(head1==head2)
        {
            return head1->data;
        }
        head1=head1->next;
        head2=head2->next;
    }
}
