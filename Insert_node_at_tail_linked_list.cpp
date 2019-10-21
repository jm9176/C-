/*
https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem
*/

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* temp_node;
    temp_node = new SinglyLinkedListNode(data);

    if(head == NULL){
        head = temp_node;
        return head;
    }

    SinglyLinkedListNode* temp_head;
    temp_head = head;

    while(head->next){
        head = head->next;
    }

    head->next = temp_node;
    return temp_head;

}
