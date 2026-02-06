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

void print_BST(Tree* root) {
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

Tree* convert(vector<int> v, int st, int end) {
    if (st > end) return nullptr;
    int mid = st+(end-st)/2;
    Tree* root = new Tree(v[mid]);
    root->left = convert(v, st, mid-1);
    root->right = convert(v,mid+1,end);
    return root;
}
int main() {

    int n;
    cin >> n;
    vector<int> vc (n);
    for (int i=0; i<n; i++) {
        cin >> vc[i];
    }
    print_BST(convert(vc,0,n-1));
    return 0;
}