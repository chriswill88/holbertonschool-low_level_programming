#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves
 * @tree: ptr to tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			n = 1;
		return(binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + n);
	}
	return (0);
}
