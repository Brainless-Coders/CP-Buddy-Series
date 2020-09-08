
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.
        if(root == NULL) {
            return -1;
        }
        int l =  height(root->left);
        int r =  height(root->right);
        return 1+max(l, r);
    }
