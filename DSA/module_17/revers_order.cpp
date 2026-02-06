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

vector<int> revers(Tree* root) {
    vector<int> ans;
    if (!root) return ans;

    queue<Tree*> q;
    q.push(root);
    while (!q.empty()) {
        Tree* cur = q.front();
        q.pop();

        ans.push_back(cur->val);

        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
    return ans;
}

int main() {

    Tree* root = input_tree();
    vector<int> v = revers(root);
    reverse(v.begin(), v.end());
    for (int x : v) cout << x << " ";
    
    
    return 0;
}