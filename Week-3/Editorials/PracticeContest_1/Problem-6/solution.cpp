// Complete the reversePrint function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void reversePrint(SinglyLinkedListNode* head) {
    vector<int> v;
    while(head){
        v.push_back(head->data);
        head = head -> next;
    }
    for(auto i = v.rbegin(); i != v.rend(); i++){
        cout << *i << endl;
    }
}


// Credits : Vanamala Srikanth
