
/*
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

    void levelOrder(Node * root) {
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* x = q.front();
            q.pop();
            cout << x->data << " ";
            if(x->left) {
                q.push(x->left);
            }
            if(x->right) {
                q.push(x->right);
            }
        }

    }
