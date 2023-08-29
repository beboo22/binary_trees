#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 *
 * Return: The height of the binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	size_t r = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (l > r)
	{
		return (l);
	}
	else
	{
		return (r);
	}
}
