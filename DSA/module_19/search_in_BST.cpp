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
        int left, right;
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

void print_tree(Tree* root) {
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
}

bool search(Tree* root, int val) {
    if (!root) return false;
    if (root->val == val) return true;

    if (val < root->val)
        return search(root->left,val);
    else
        return search(root->right,val);
}

int main() {

    Tree* root = input_tree();
    int val;
    cin >> val;
    (search(root,val)) ? cout << "Found\n" : cout << "Not Found\n" ; 
    return 0;
}