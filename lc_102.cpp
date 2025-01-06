
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;  // Stores the result
        if (root == nullptr) return ans;  // If the tree is empty, return an empty vector

        queue<TreeNode*> q;  // Queue for BFS
        q.push(root);

        while (!q.empty()) {
            int size = q.size();  // Number of nodes at the current level
            vector<int> level;  // Stores nodes at the current level

            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();  // Get the front node
                q.pop();  // Remove it from the queue

                // Add the node's value to the current level
                level.push_back(node->val);

                // Add left and right children to the queue if they exist
                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
            }

            // Add the current level to the result
            ans.push_back(level);
        }

        return ans;
    }
};