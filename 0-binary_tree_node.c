#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *root_tree;

	root_tree = malloc(sizeof(binary_tree_t));
	if (root_tree == NULL)
		return (NULL);

	root_tree->n = value;
	root_tree->parent = parent;
	root_tree->left = NULL;
	root_tree->right = NULL;

	return (root_tree);
}
