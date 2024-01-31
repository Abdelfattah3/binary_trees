#include "binary_trees.h"
/**
* binary_tree_nodes - calculates nodes of a tree
* @tree: the root node of the tree
* Return: the nodes of the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_nodes(tree->left);
		no_r = binary_tree_nodes(tree->right);
		return (no_l + no_r + (!tree->left && !tree->right ? 0 : 1));
	}
	return (0);
}
