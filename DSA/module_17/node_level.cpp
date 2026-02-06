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

        int left,right;
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

// void level_order_print(Tree* root) {
//     if (!root) {
//         cout << "No Tree" << endl;
//         return;
//     }
//         queue<Tree*> q;
//         q.push(root);
//         while (!q.empty()) {
//             Tree* cur = q.front();
//             q.pop();

//             cout << cur->val << " ";

//             if (cur->left) q.push(cur->left);
//             if (cur->right) q.push(cur->right);
//         }
//         cout << endl;
    
// }

int level_order_print(Tree* root, int k) {
    if (!root) {
        cout << "No Tree" << endl;
        return 0;
    }
    queue<pair<Tree*, int>> q;
    q.push({root,1});
    while (!q.empty()) {
        Tree* cur = q.front().first;
        int level = q.front().second;
        q.pop();

        if (cur->val == k) {
            return level;
        }

        if (cur->left) q.push({cur->left, level+1});
        if (cur->right) q.emplace(cur->right, level+1);
    }
    cout << endl;
    return 0;
}

int main() {

    Tree* root = input_tree();
    int x;
    cin >> x;
    cout << level_order_print(root,x);
    return 0;
}