#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left -  inserts a node as the left-child of another node
 * @parent: pointer to the node
 * @value: value to store in the node
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lchild;

	if (parent == NULL)
		return (NULL);
	lchild = binary_tree_node(parent, value);
	if (lchild == NULL)
		return (NULL);
	lchild->left = parent->left;
	if (lchild->left != NULL)
		lchild->left->parent = lchild;
	parent->left = lchild;
	return (lchild);
}
