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

void insert_after(Node *temp, int after, int new_data){
    Node *new_node, *next_node;
    new_node = new Node;
    next_node = new Node;
    
    while(temp->data != after){
        temp = temp->next;
        }
    next_node = temp -> next;
    temp -> next = new_node;
    new_node -> data = new_data;
    new_node -> next = next_node;
    
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
    push_end(head, 3);
    push_end(head, 4);
    print_list(head);
    
    insert_after(head, 2, 5);
    cout<<"New list"<<endl;
    print_list(head);
    
    return 0;
    }
