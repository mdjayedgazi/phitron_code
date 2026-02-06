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
void printNodes(Tree* root, int v) {
    if(!root) {
        cout << "Invalid";
        return;
    }

    queue<pair<Tree*, int>> q;
    q.emplace(root,0);

    bool found = false;
    while (!q.empty()) {
        Tree* cur = q.front().first;
        int curv = q.front().second;
        q.pop();

        if (curv == v) {
            cout << cur->val << " ";
            found =true;
        }

        if (cur->left) q.emplace(cur->left, curv+1);
        if (cur->right) q.emplace(cur->right, curv+1);

    }
    if (!found) cout << "Invalid";
}
int main() {

    Tree* root = input_tree();
    int v;
    cin >> v;
    printNodes(root,v);
    return 0;
}