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

        // Create and push Left Node.
        if (l != -1) {
            cur->left = new Tree(l);
            q.push(cur->left);
        }
        
        // Create and push Right Node.
        if (r != -1) {
            cur->right = new Tree(r);
            q.push(cur->right);
        }
    }
    return root;
}

int count_tree_size (Tree* root) {
    if (!root) return 0;

    int l = count_tree_size(root->left);
    int r = count_tree_size(root->right);
    return l+r+1;
}

int main() {

    Tree* root = input_tree();
    cout <<  count_tree_size(root) << endl;
    return 0;
}