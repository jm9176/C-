#include<iostream>
#include<unordered_set>
using namespace std;

class Node{
    public:
        int data;
        Node *next = NULL;
    };
    
bool find_loop(Node *temp){
    if(temp == NULL){
        return false;
        }
    
    unordered_set<Node *> loop_set;
    while(temp != NULL){
        loop_set.insert(temp);
        temp = temp->next;
        
        if(loop_set.find(temp) != loop_set.end()){
            return true;
            }
        }
        
    return false;
    }

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
    bool loop_status = false;
    
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
    
    loop_status = find_loop(head);
    
    if(loop_status == false){
        cout<<"No loop found"<<endl;
        } else {
        cout<<"Loop found"<<endl;
    }
    
    return 0; 
    }
