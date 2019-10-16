#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    int height(Node* root) {
        // Write your code here.
        if(!root){
            return 0;
        }

        int max_height = 0;
        Node* temp_node = root;
        map<Node*, int> node_map;
        queue<Node*> node_queue;
        node_queue.push(root);
        node_map[temp_node] = 0;
        
        while(!node_queue.empty()){
            temp_node = node_queue.front();
            node_queue.pop();

            if(temp_node->left != NULL){
                node_queue.push(temp_node->left);
                node_map[temp_node->left] = node_map[temp_node]+1;
                
                if(node_map[temp_node->left] > max_height){
                    max_height = node_map[temp_node->left];
                }
            }
            if(temp_node->right != NULL){
                node_queue.push(temp_node->right);
                node_map[temp_node->right] = node_map[temp_node]+1;
                
                if(node_map[temp_node->right] > max_height){
                    max_height = node_map[temp_node->right];
                }
            }

        }

        return max_height;
    }
}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}
