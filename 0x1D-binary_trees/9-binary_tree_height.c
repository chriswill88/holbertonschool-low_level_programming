#include "binary_trees.h"
/**
 * binary_tree_height - get the height of a tree
 * @tree: ptr to tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree)
	{
		if (tree->left)
			n += 1;
		if (tree->right)
			n += 1;

		return (n += binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}
