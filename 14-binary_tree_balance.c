#include "binary_trees.h"
/**
* binary_tree_balance - calculates balance of a tree
* @tree: the root node of the tree
* Return: the nodes of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_height(tree->left);
		no_r = binary_tree_height(tree->right);
		return ((int)no_l - (int)no_r);
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
		return  ((no_l > no_r ? no_l : no_r) + 1);
	}
	return (0);
}
