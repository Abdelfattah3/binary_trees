#include "binary_trees.h"
/**
* binary_tree_is_full - checks if a tree is full
* @tree: the root node of the tree
* Return: 1 if full 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_is_full(tree->left);
		no_r = binary_tree_is_full(tree->right);
		return ((no_l + 1) == (no_r + 1) ? 1 : 0);
	}
	return (0);
}
