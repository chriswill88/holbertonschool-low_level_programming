#include "binary_trees.h"
/**
 * 
 * 
 * 
 * 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new = malloc(sizeof(parent));
    if (new == NULL)
        return (NULL);

    new->parent = parent;
    new->left = NULL;
    new->right = NULL;
    new->n = value;
    return (new);
}