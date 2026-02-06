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
        cout << "No Tree" << endl;
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

void insert(Tree* &root, int val) {
    if(!root) {
        root = new Tree(val);
        return;
    }
    if (root->val > val) {
        if(!root->left) 
            root->left = new Tree(val);
        else 
            insert(root->left,val); 
    }
    else {
        if (!root->right) 
            root->right = new Tree(val);
        else
            insert(root->right,val);
    }
    
}

int main() {

    Tree* root = input_tree();
    int val;
    cin >> val;
    insert(root,val);
    print_tree(root);
    return 0;
}