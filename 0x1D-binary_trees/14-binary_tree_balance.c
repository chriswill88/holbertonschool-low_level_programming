#include "binary_trees.h"
/**
 * binary_tree_balance - gets the balance factor of the tree
 * @tree: node to the tree
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int n = 0;
	const binary_tree_t *l = tree->left, *r = tree->right;

	if (tree)
	{
		if (tree->left)
			n += 1;
		if (tree->right)
			n -= 1;
		l = tree->left;
		r = tree->right;
		return (binary_tree_balance(l) - binary_tree_balance(r) + n);
	}
	return (0);
}
