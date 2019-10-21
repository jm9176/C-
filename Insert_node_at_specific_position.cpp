/*
https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem
*/

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    
    SinglyLinkedListNode *ins_node, *temp_node, *temp_head;
    ins_node = new SinglyLinkedListNode(data);
    int count = 0;
    temp_head = head;

    while(count<position-1){
        head = head -> next;
        count++;
    }

    temp_node = head->next;
    head->next = ins_node;
    ins_node->next = temp_node;

    return temp_head;

}
