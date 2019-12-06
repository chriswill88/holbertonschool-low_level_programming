#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if tree is full
 * @tree: the node to a tree
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (tree)
	{
		if (tree->left && tree->right)
			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
		else if (!tree->left && !tree->right)
			return (1);
		else
			return (0);
	}
	return (0);
}
