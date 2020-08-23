# Complete the insertNodeAtTail function below.

#
# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
def insertNodeAtTail(head, data):
    new_node = SinglyLinkedListNode(data)
    cur = head
    if cur is None:
        head = new_node
        return head
    while cur:
        if cur.next is None:
            cur.next = new_node
            return head
        cur = cur.next