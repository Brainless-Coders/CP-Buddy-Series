SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) 
{
    if(head==nullptr||head->next==nullptr)
    return head;
    SinglyLinkedListNode* ans=new SinglyLinkedListNode(0);
    SinglyLinkedListNode* ans2 = ans;
    stack<int>s;
    while(head!=nullptr)
    {
        s.push(head->data);
        head= head->next;
    }
    while(!s.empty())
    {
        ans->next = new SinglyLinkedListNode(s.top());
        s.pop();
        ans=ans->next;
    }
    return ans2->next;
}
