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

    void topView(Node * root) {
        queue<pair<int, Node*>> q;
        map<int, Node*> unique_level;
        q.push(make_pair(0, root));
        for(auto i = q.front(); !q.empty(); q.pop(), i=q.front()) {
            if(!i.second) 
                continue;
            unique_level.insert(i);
            q.push(make_pair(i.first+1, i.second->right));
            q.push(make_pair(i.first-1, i.second->left));
        }
        for(auto i:unique_level) {
            cout << i.second->data << " ";
        }
    }
