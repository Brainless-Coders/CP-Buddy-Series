/* you only have to complete the function given below.  
Node is defined as  

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

*/

    void inOrder(Node *root) {
        if(root == NULL) 
            return;
        if(root->left) {
            inOrder(root->left);
        }
        cout << root->data << " ";
        if(root->right) {
            inOrder(root->right);
        }
    }
