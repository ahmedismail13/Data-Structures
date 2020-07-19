class IntBinaryTree
{
public:
	struct TreeNode
	{
		int value;
		TreeNode *left;
		TreeNode *right;
	};
	TreeNode *root;
	IntBinaryTree() { root = nullptr; }
	~IntBinaryTree() { }
	void insertNode(int);
	bool searchNode(int);
	void remove(int);
	void showNodesInOrder(void) { displayInOrder(root); }
	void showNodesPreOrder() { displayPreOrder(root); }
	void showNodesPostOrder() { displayPostOrder(root); }
	void destroySubTree(TreeNode *);
	void deleteNode(int, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode *);
	void displayPreOrder(TreeNode *);
	void displayPostOrder(TreeNode *);
};