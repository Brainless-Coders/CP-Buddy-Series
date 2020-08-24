bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
  while(head1!=nullptr&&head2!=nullptr)
  {
      if(head1->data!=head2->data)
          return false;
      head1=head1->next;
      head2=head2->next;
  }
  if(head1==nullptr&&head2==nullptr)
      return true;  
      return false;
}
