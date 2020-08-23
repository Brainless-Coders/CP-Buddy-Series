# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def insertNodeAtHead(llist, data):
    # Write your code here
    cur = llist
    new_node = SinglyLinkedListNode(data)
    if cur is None:
        head = new_node
        return head
    else:
        new_node.next = cur
        head = new_node
        return head