#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of binary tree.
 * @tree: pointer to the root node
 * Return: if tree is NULL, must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t nleft, nright;

		nleft = binary_tree_size(tree->left);
		nright = binary_tree_size(tree->right);
		return (1 + nleft + nright);
	}
}
