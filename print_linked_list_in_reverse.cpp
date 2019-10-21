/*
https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem
*/

void reversePrint(SinglyLinkedListNode* head) {

    if(head == NULL){
        return;
    }

    stack<int> list_stack;
    while(head){
        list_stack.push(head->data);
        head = head->next;
    }

    while(!list_stack.empty()){
        cout<<list_stack.top()<<endl;
        list_stack.pop();
    }

}
