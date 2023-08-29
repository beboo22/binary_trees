#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a preorder traversal on a binary tree
 * @tree: Pointer to the root of the tree
 * @func: Pointer to a function to call for each node's value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		printf("%d\n", tree->n);
		binary_tree_preorder(tree->left, func);   /* Recurse on the left subtree */
		binary_tree_preorder(tree->right, func);  /* Recurse on the right subtree */
	}
}
