#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next = NULL;
    };

void push_end(Node *temp, int temp_data){
    
    Node *new_node;
    new_node = new Node;
    
    while(temp->next){
        temp = temp->next;
        }
    
    temp -> next = new_node;
    new_node->data = temp_data;
    
    }

void print_list(Node *temp){
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
        }
    }

int main(){
    
    Node *head;
    head = new Node;
    head -> data = 1;
    
    print_list(head);
    push_end(head, 2);
    print_list(head);
    
    return 0;
    }
