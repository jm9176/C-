#include<iostream>
#include<unordered_set>
using namespace std;

class Node{
    public:
        int data;
        Node *next = NULL;
    };

void print_list(Node *temp){
    if(temp == NULL){
        return;
        }
    
    unordered_set<Node *> set1;
    
    while(temp != NULL){
        
        set1.insert(temp);
        cout<<temp->data<<endl;
        temp = temp->next;
    
        if(set1.find(temp) != set1.end()){
            return;
            }
    }
}

int main(){
    
    Node *head, *sec, *third, *four, *five;
    head = new Node;
    sec = new Node;
    third = new Node;
    four = new Node;
    five = new Node;
    
    head -> data = 1;
    sec -> data = 2;
    third -> data = 3;
    four -> data = 4;
    five -> data = 5;
    
    head -> next = sec;
    sec -> next = third;
    third -> next = four;
    four -> next = five;
    five -> next = sec;
    
    print_list(head);
    
    return 0; 
    }
