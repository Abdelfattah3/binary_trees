#include "binary_trees.h"
/**
* binary_tree_node - create the parent node
* @parent: pointer to the parent node
* @value: the data to be inserted
* Return: pointer to the newly formed tree
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *te = NULL;

	te = malloc(sizeof(binary_tree_t));
	if (!te)
	{
		free(te);
		return (NULL);
	}
	te->n = value;
	te->left = NULL;
	te->right = NULL;
	te->parent = parent;
	return (te);
}
