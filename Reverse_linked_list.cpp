#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next = NULL;
    };

void push_after(Node* temp, int new_data){
    
    Node *new_node;
    new_node = new Node;
    
    while(temp->next){
        temp = temp->next;
        }
    temp->next = new_node;
    new_node -> data = new_data;
    }

void print_list(Node *temp){
    
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
        }
    }
    
void rev_list(Node* temp, Node** new_head){
    Node *prev_node, *next_node;
    prev_node = new Node;
    next_node = new Node;
    
    prev_node = NULL;
    
    while(temp){
        next_node = temp->next;
        temp->next = prev_node;
        prev_node = temp;
        temp = next_node;
        }
    *new_head = prev_node;
    }

int main(){
    
    Node *head;
    head = new Node;
    head -> data = 1;
    
    push_after(head, 2);
    push_after(head, 3);
    push_after(head, 4);
    push_after(head, 5);   
    
    print_list(head);
    
    cout<<"Rev list"<<endl;
    rev_list(head, &head);
    print_list(head);
    
    return 0;
    }
