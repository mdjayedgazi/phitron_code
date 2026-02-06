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

void print_left(Tree* root) {
    if (!root) return;
    if (root->left) {
        print_left(root->left);
    } else if (root->right) {
        print_left(root->right);
    }
    cout << root->val << " ";
}

void print_right(Tree* root) {
    if (!root) return;
    cout << root->val << " ";
    if (root->right) {
        print_right(root->right);
    } else if (root->left) {
        print_right(root->left);
    }
}

int main() {

    Tree* root = input_tree();
    print_left(root->left);
    cout << root->val << " ";
    print_right(root->right);
    return 0;
}