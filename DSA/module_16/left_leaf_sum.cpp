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

int leaf_node(Tree* root) {
    if (!root) return 0;
    int sum = 0;
    if (root->left && !root->left->left && !root->left->right) {
        sum += root->left->val;
    }

    sum += leaf_node(root->left);
    sum += leaf_node(root->right);

    return sum;
}

int main() {

    Tree* root = input_tree();
    cout << leaf_node(root);
    return 0;
}