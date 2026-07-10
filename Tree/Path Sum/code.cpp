bool hasPathSum(TreeNode* root, int targetSum) {
		if(root == NULL) return false;

		if(!root->left && !root->right && targetSum == root->val) return true;

		bool left_path = root->left && hasPathSum(root->left, targetSum - root->val);
		bool right_path = root->right && hasPathSum(root->right, targetSum - root->val);
		
		return left_path || right_path;
}

Time Complexcity : O(n)
 Space complexity is O(h) for the recursion call stack, where h is the height of the tree — O(log n) for a balanced tree, O(n) worst case for a skewed one.
