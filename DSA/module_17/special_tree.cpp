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

        int left , right;
        cin >> left >> right;
        if (left != -1) {
            cur->left = new Tree(left);
            q.push(cur->left);
        }
        if (right != -1) {
            cur->right = new Tree(right);
            q.push(cur->right);
        }
    }
    return root;
}

bool special(Tree* root) {
    if (!root) return false;
    queue<Tree*> q;
    q.push(root);
    while (!q.empty()) {
        Tree* cur = q.front();
        q.pop();

        if ((cur->left && !cur->right) || (!cur->left && cur->right)) return false;

        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
    return true;
}

bool spec (Tree* root) {
    if (!root) return true;
    if ((root->left && !root->right) || (!root->left && root->right)) return false;
    bool left = spec(root->left);
    bool right = spec(root->right);
    return (left && right);
}

int main() {

    Tree* root = input_tree();
    cout << spec(root);
    return 0;
}