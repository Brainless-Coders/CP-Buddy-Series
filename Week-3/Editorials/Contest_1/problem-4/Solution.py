# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def insertNodeAtPosition(head, data, position):
    cur = head
    new_node = SinglyLinkedListNode(data)
    count = 0
    prev = None
    while cur and count != position:
        prev = cur
        cur = cur.next
        count += 1
    prev.next = new_node
    new_node.next = cur
    return head
