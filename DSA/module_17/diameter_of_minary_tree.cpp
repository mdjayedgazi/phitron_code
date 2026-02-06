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
static int ma;
int diameter (Tree* root) {
    if (!root) return 0;

    int left = diameter(root->left);
    int right = diameter(root->right);
    int dia = left + right;
    ma = max(ma,dia);
    return max(left , right) + 1; 
}

int main() {

    ma = 0;
    return 0;
}