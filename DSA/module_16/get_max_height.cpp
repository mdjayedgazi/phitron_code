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

int max_height(Tree* root) {
    if (!root) return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l,r)+1;
}

int leaf_node(Tree* root) {
    if (!root) return 0;
    if (!root->left && !root->right) return 1;

    int left = leaf_node(root->left);
    int right = leaf_node(root->right);

    return left+right;
}

int count_tree_size(Tree* root) {
    if (!root) return 0;
    
    int left = count_tree_size(root->left);
    int right = count_tree_size(root->right);

    return left + right + 1;
}

void level_order_print(Tree* root) {
    if (!root) {
        cout << "NO Tree" << endl;
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
    // cout << max_height(root);
    // cout << leaf_node(root) << endl;
    // cout << count_tree_size(root) << endl;
    level_order_print(root);
    return 0;
}