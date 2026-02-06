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

vector<int> left_view(Tree* root) {
    vector<int> ans;
    if(!root) return ans;
    bool fre[3005] = {false};
    queue<pair<Tree*, int>> q;
    q.push({root,1});
    while (!q.empty()) {
        Tree* cur = q.front().first;
        int level = q.front().second;
        q.pop();

        if (!fre[level]) {
            ans.push_back(cur->val);
            fre[level] = true;
        }

        if (cur->left) q.push({cur->left,level+1});
        if (cur->right) q.push({cur->right, level+1});
    }
    return ans;
}

int main() {

    Tree* root = input_tree();
    for (int v : left_view(root)) {
        cout << v << " "; 
    }
    return 0;
}