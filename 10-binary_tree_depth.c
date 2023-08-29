#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    
    size_t l = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
    size_t r = tree->right ? 1 + binary_tree_depth(tree->right) : 0;
    
    if (l > r) {
        return l;
    } else {
        return r;
    }
}

