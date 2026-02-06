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

void lavel_order (Tree* root) {
    if (!root) {
        cout << "NO TREE" << endl;
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

int count_tree_size(Tree* root) {
    if (!root) return 0;
    int l = count_tree_size(root->left);
    int r = count_tree_size(root->right);
    return l+r+1;
}

int count_leaf_node (Tree* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;
    int l = count_leaf_node(root->left);
    int r = count_leaf_node(root->right);
    return l+r;
}

int main() {

    Tree* root = input_tree();
    // lavel_order(root);
    // cout << count_tree_size(root);
    cout << count_leaf_node(root);
    return 0;
}