DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) 
{
    if(head==nullptr)
        return head;
    while(true)
    {
        swap(head->next, head->prev);
        if(head->prev == nullptr)
            break;
        head = head->prev;
    }
    return head;
}
