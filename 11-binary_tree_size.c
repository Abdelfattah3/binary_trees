#include "binary_trees.h"
/**
* binary_tree_size - calculates size of a tree
* @tree: the root node of the tree
* Return: the size of the tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_size(tree->left);
		no_r = binary_tree_size(tree->right);
		return (no_l + no_r + 1);
	}
	return (0);
}
