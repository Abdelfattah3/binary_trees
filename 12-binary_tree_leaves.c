#include "binary_trees.h"
/**
* binary_tree_leaves - calculates leaves of a tree
* @tree: the root node of the tree
* Return: the leaves of the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_leaves(tree->left);
		no_r = binary_tree_leaves(tree->right);
		return (no_l + no_r + (!tree->left && !tree->right ? 1 : 0));
	}
	return (0);
}
