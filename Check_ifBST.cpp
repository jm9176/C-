	bool checkBST(Node* root) {
        static int val = 0;
        static bool status = true;

        if(root->left != NULL){    
            checkBST(root->left);
        }

        if(root->data > val){
            val = root->data;
        } else {
            status = false;
        }
        if(root->right != NULL){
            checkBST(root->right);
        }
        
        return status;
	}
