/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> res;      // To store sum of each level
        queue<TreeNode*> q;         // Queue for level-order traversal (BFS)
        
        q.push(root);               // Start BFS from the root node
        while (!q.empty()) {
            int n = q.size();       // Number of nodes at the current level
            long long sum = 0;      // Sum of node values at the current level
            
            // Process all nodes at the current level
            while (n--) {
                TreeNode* node = q.front(); q.pop();   // Get the front node from the queue
                sum += (long long)node->val;           // Add node's value to the level sum
                
                // Push left and right children of the node to the queue (if they exist)
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            res.push_back(sum);     // Store the sum of the current level
        }

        // If k is greater than the number of levels, return -1
        if (k > res.size()) return -1;
        
        // Sort the level sums in descending order
        sort(res.begin(), res.end(), greater<long long>());
        
        // Return the k-th largest level sum (k-1 due to 0-based indexing)
        return res[k-1];
    }
};
