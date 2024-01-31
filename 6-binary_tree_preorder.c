#include "binary_trees.h"
/**
* binary_tree_preorder - traverse the tree in preorder
* @tree: the root node of the tree
* @func: pointer to a function that print the node value
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
