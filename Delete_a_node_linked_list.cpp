/*
https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
*/

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    
    if(position == 0){
        return head->next;
    }
    
    int count = 0;
    SinglyLinkedListNode* temp_node, *temp_head;

    temp_head = head;

    while(count < position-1){
        head = head->next;
        count++;
    }

    temp_node = head->next->next;
    head->next = temp_node;
    return temp_head;
}
