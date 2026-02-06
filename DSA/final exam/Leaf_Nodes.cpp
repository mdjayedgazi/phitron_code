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

void leaf_nodes(Tree* root, vector<int>& v) {
    if (!root) return;
    if (!root->left && !root->right) {
        v.push_back(root->val);
    }
    leaf_nodes(root->right,v);
    leaf_nodes(root->left,v);
}

int main() {

    Tree* root = input_tree();
    vector<int> vc;
    leaf_nodes(root,vc);
    sort(vc.begin(),vc.end(), greater<int>());
    for (int x : vc) cout << x << " ";
    return 0;
}