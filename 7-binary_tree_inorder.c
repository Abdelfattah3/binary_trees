#include "binary_trees.h"
/**
* binary_tree_inorder - traverse the tree in inorder
* @tree: the root node of the tree
* @func: pointer to a function that print the node value
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
