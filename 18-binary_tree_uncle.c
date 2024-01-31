#include "binary_trees.h"
/**
* binary_tree_uncle - search for uncle node
* @node: the node which will check
* Return: pointer to the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *te = NULL;

	if (!node)
	{
		return (NULL);
	}
	te = binary_tree_sibling(node->parent);
	return (te);
}

/**
* binary_tree_sibling - search for sibing node
* @node: the node which will check
* Return: pointer to the sibing node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *te = NULL;

	if (!node || !(node->parent))
	{
		return (NULL);
	}
	te = node->parent->left;
	if (te == node)
	{
		return (node->parent->right);
	}
	return (te);
}
