#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
    };

void create_list(Node *temp, int temp_arr[], int temp_size){
    Node *new_temp;
    
    for(int i=0; i<temp_size; i++){
        if(i<temp_size-1){
            new_temp = new Node;
            temp->next = new_temp;
        }
        temp->data = temp_arr[i];
        //cout<<temp->data<<endl;
        temp = temp->next;
        }
    }
    
void print_list(Node *temp){
    
    if(!temp){
        return;
        }
    
    while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
        }
    }

int main(){
    
    int arr[] = {1,2,3,4,5,6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    
    Node *head;
    head = new Node;
    
    create_list(head, arr, arr_size);
    print_list(head);
    
    return 0;
    }
