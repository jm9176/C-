/*
https://www.hackerrank.com/challenges/compare-two-linked-lists/problem
*/

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    if(head1 == NULL && head2 == NULL){
        return true;
    }

    if(head1 == NULL && head2 != NULL){
        return false;
    }

    if(head1 != NULL && head2 == NULL){
        return false;
    }

    while(head1){
        if(head2 == NULL){
            return false;
        }else if(head1->data != head2->data){
            return false;
        }

        head1 = head1->next; 
        head2 = head2->next;
    }

    if(head1 == NULL && head2 != NULL){
        return false;
    }  else {
        return true;
    }

}
