#include "binary_trees.h"
/**
* binary_tree_postorder - traverse the tree in postorder
* @tree: the root node of the tree
* @func: pointer to a function that print the node value
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
