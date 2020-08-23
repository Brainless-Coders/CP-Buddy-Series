# For your reference:
#
# SinglyLinkedListNode:
#     int data
#     SinglyLinkedListNode next
#
#
def deleteNode(head, position):
    cur = head
    if position == 0:
        head = cur.next
        cur.next = None
        cur = None
        return head
    count =0
    prev = None
    while cur.next and count != position:
        prev = cur
        cur = cur.next
        count += 1
    prev.next = cur.next
    cur.next = None
    return head