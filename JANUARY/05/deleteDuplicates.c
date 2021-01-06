var deleteDuplicates = function(head) {
    let dummyNode = new ListNode(-1);
    let prev = dummyNode;
    prev.next = head;
    
    while (head){
        if (head.next != null && head.val == head.next.val) {
            while (head.next != null && head.val == head.next.val) {
                head.next = head.next.next
            }
            prev.next = head.next;
        } else {
            prev = head;
        }
        head = head.next;
    }
    return dummyNode.next
};