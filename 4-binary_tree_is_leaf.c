#include "binary_trees.h"
/**
* binary_tree_is_leaf - checks if the node if leaf or not
* @node: the node to be checked
* Return: 1 if leaf 0 if not
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{
		return (0);
	}
	if (!node->left && !node->right)
	{
		return (1);
	}
	return (0);
}
