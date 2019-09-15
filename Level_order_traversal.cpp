#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node *left = NULL;
        Node *right = NULL;
    };
    
void print_preOrder(Node* temp){
    if (temp == NULL){
        return;
        }
    
    cout<<temp->data<<endl;
    print_preOrder(temp->left);
    print_preOrder(temp->right);
    }
    
void levelOrder(Node *temp){
    if(temp == NULL){
        return;
        }
    
    queue<Node*>q_list;
    q_list.push(temp);
    Node* next_node;
    
    while(q_list.empty() == false){
        next_node = q_list.front();
        cout<<next_node->data<<endl;
        q_list.pop();
        
        if (next_node->left != NULL){
            q_list.push(next_node->left);
            }
        if(next_node->right != NULL){
            q_list.push(next_node->right);
            }
        }
    }
    
int main(){
    
    Node *root, *rLeft, *rRight;
    root = new Node;
    rLeft = new Node;
    rRight = new Node;
    
    root->data = 1;
    rLeft->data = 3;
    rRight->data = 2;
    
    root->left = rLeft;
    root->right = rRight;
    
    levelOrder(root);
    
    return 0;
    }
