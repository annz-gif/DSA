class Solution {
public:
    TreeNode* replaceValueInTree(TreeNode* root) {
        if (!root) return nullptr;

        queue<TreeNode*> q;
        int prev = root->val;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int curr = 0;

            while (size > 0) {
                TreeNode* temp = q.front();
                q.pop();

                int leftRight = (temp->left ? temp->left->val : 0) + (temp->right ? temp->right->val : 0);

                if (temp->left) {
                    temp->left->val = leftRight;
                    q.push(temp->left);
                }

                if (temp->right) {
                    temp->right->val = leftRight;
                    q.push(temp->right);
                }

                curr += leftRight;
                temp->val = prev - temp->val;
                size--;
            }

            prev = curr;
        }

        return root;
    }
};
