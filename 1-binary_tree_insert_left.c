#include "binary_trees.h"
/**
* binary_tree_insert_left - insert a node left to the parent
* @parent: pointer to the parent node
* @value: the data to be inserted
* Return: pointer to the newly formed node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *te = NULL;

	if (!parent)
	{
		return (NULL);
	}
	te = binary_tree_node(parent, value);
	if (!te)
	{
		return (NULL);
	}
	if (parent->left)
	{
		te->left = parent->left;
		te->left->parent = te;
	}
	parent->left = te;
	return (te);
}
