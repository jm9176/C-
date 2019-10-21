/*
https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem
*/


SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(head1 == NULL){
        return head2;
    } else if(head2 == NULL){
        return head1;
    } else if (head1 == NULL && head2 == NULL){
        return head1;
    }

    SinglyLinkedListNode* temp_node, *temp_head;    
    if(head1->data < head2->data){
        temp_node = head1;
        head1 = head1->next;
    } else {
        temp_node = head2;
        head2 = head2->next;
    }

    temp_head = temp_node;

    while(head1){
        
        if(head1 == NULL){
            temp_node->next = head2;
            temp_node = temp_node->next;
        } else if(head2 != NULL && head2->data < head1->data){
            temp_node -> next = head2;
            temp_node = temp_node->next;
            head2 = head2->next;
        } else {
            temp_node -> next = head1;
            temp_node = temp_node->next;
            head1 = head1->next;
        }

    }
    temp_node->next = head2;

    return temp_head;
}
