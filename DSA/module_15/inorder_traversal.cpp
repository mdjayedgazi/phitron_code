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

void inorder (Tree* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main() {

    Tree* root = new Tree(10);
    Tree* a = new Tree(20);
    Tree* b = new Tree(30);
    Tree* c = new Tree(40);
    Tree* d = new Tree(50);
    Tree* e = new Tree(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
    inorder(root);
    return 0;
}