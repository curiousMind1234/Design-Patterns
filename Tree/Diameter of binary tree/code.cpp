int diameterOfBinaryTree(TreeNode* root) {
		int maxDia = 0;
		diameterHelper(root, maxDia);
		return maxDia;
}

int diameterHelper(TreeNode* root, int& maxDia){
		if(!root) return 0;

		int leftHeight = diameterHelper(root->left, maxDia);
		int rightHeight = diameterHelper(root->right, maxDia);

		maxDia = max(maxDia, leftHeight + rightHeight);
		return 1 + max(leftHeight , rightHeight);
}

TC: O(N)
SC: O(h)
