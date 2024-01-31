#include "binary_trees.h"
/**
* binary_tree_depth - calculates depth of a tree
* @tree: the root node of the tree
* Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t no_l;

	if (tree != NULL)
	{
		no_l = binary_tree_depth(tree->parent);
		return (no_l + (tree->parent == NULL ? 0 : 1));
	}
	return (0);
}
