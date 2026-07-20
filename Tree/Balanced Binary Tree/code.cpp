bool isBalanced(TreeNode* root) {
		return balancedHelper(root) != -1;
}

int balancedHelper(TreeNode* root){
		if(root == NULL) return 0;

		int leftHeight = balancedHelper(root->left);
		int rightHeight = balancedHelper(root->right);

		if(leftHeight == -1 || rightHeight == -1) return -1;
		
		if(abs(leftHeight - rightHeight) > 1) return -1;
		

		return 1 + max(leftHeight , rightHeight);
}

TC: O(N)
SC: O(H)
