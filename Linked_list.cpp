#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    };

void set_value(Node* temp){
    
    for(int i=0; i<3; i++){
        temp -> data = i+1;
        temp = temp -> next;
        }
    }

void print_value(Node* temp){
    while(temp){
        cout<<temp -> data<<endl;
        temp = temp -> next;
        }
    }
    
int main(){
    
    Node *head, *sec, *third;
    
    head = new Node;
    sec = new Node;
    third = new Node;
    
    head -> next = sec;
    sec -> next = third;
    third -> next = NULL;
    
    set_value(head);
    print_value(head);
    
    delete head;
    delete sec;
    delete third;
    
    return 0;
    }
