#include <bits/stdc++.h>
using namespace std;
class Tree {
    public:
        int val;
        Tree* left;
        Tree* right;
        Tree (int val) {
            this->val = val;
            this->left = nullptr;
            this->right = nullptr;
        }
};

Tree* input_tree() {
    int val;
    cin >> val;
    if (val == -1) return nullptr;

    Tree* root = new Tree(val);
    queue<Tree*> q;
    q.push(root);

    while (!q.empty()) {
        Tree* cur = q.front();
        q.pop();

        int l,r;
        cin >> l >> r;

        if (l != -1) {
            cur->left = new Tree(l);
            q.push(cur->left);
        }
        if (r != -1) {
            cur->right = new Tree(r);
            q.push(cur->right);
        }
    }
    return root;
}

// Tree* input_trees() {
//     int val;
//     cin >> val;
//     if (val == -1) return nullptr;
    
//     Tree* root = new Tree(val);

//     root->left = input_trees();
//     root->right = input_trees();
//     return root;
// }

void level_order(Tree* root) {
    if (!root) {
        cout << "NO TREE\n";
        return;
    }

    queue<Tree*> q;
    q.push(root);
    
    while (!q.empty()) {
        Tree* cur = q.front();
        q.pop();

        cout << cur->val << " ";

        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
    cout << endl;
}


int main() {

    Tree* root = input_tree();
    level_order(root);    
    return 0;
}