#include "binary_trees.h"
/**
* binary_tree_balance - calculates balance of a tree
* @tree: the root node of the tree
* Return: the nodes of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int no_l, no_r;

	if (tree != NULL)
	{
		no_l = binary_tree_balance(tree->left);
		no_r = binary_tree_balance(tree->right);
		return (no_l + no_r + (tree->left && tree->right ? 1 : 0) +
		(!tree->left && tree->right ? -1 : 0));
	}
	return (0);
}
