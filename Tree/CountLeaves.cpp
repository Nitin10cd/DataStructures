class Solution {
public:
    // Helper function
    void counting(Node* root, int &count) {
        if (root == nullptr) return;

        // If leaf node
        if (root->left == nullptr && root->right == nullptr) {
            count++;
            return;
        }

        counting(root->left, count);
        counting(root->right, count);
    }

    int countLeaves(Node* root) {
        int count = 0;
        counting(root, count);
        return count;
    }
};
