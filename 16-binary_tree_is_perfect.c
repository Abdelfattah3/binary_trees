#include "binary_trees.h"
/**
* binary_tree_is_perfect - checks if a tree is perfect
* @tree: the root node of the tree
* Return: 1 if full 0 if not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_height(tree->left);
		no_r = binary_tree_height(tree->right);
		return ((int)((no_l + 1) == (no_r + 1) ? 1 : 0));
	}
	return (0);
}

/**
* binary_tree_height - calculates the height of a tree
* @tree: the root node of the tree
* Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_height(tree->left);
		no_r = binary_tree_height(tree->right);
		return  (1 + (no_l > no_r ? no_l : no_r));
	}
	return (0);
}
