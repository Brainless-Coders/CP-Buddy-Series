// Complete the getNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    if(head==NULL)
        return -1;
    vector<int> v1;
    v1.push_back(head->data);
    while(head->next != NULL) {
        head=head->next;
        v1.push_back(head->data);
    }
    return v1[v1.size()-1-positionFromTail];
}