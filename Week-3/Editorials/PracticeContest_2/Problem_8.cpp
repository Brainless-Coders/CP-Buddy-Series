DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) 
{
    if(head==nullptr)
    {
        head = new DoublyLinkedListNode(data);
        return head;
    }
    if(head->data>=data)
    {
        DoublyLinkedListNode* temp = new DoublyLinkedListNode(data);
        temp->next = head;
        temp->prev = nullptr;
        head->prev = temp;
        return temp;
    }
    DoublyLinkedListNode* temp = head;
    while(head->next!=nullptr&&head->next->data<data)
        head=head->next;
    DoublyLinkedListNode* firstnext = head->next;
    head->next = new DoublyLinkedListNode(data);
    head->next->prev = head;
    head->next->next = firstnext;
    if(head->next->next != nullptr)
        head->next->next->prev = head->next;
    return temp;
}
