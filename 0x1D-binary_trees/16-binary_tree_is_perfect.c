#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: ptr to tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (perfect_return(tree) == 0)
		return (1);
	return (0);
}

/**
 * perfect_return - returns if tree is perfect or not
 * @tree: the binary tree
 * Return: value corresponding to if tree is perfect
 */
int perfect_return(const binary_tree_t *tree)
{
	int x = 0;

	if (tree)
	{
		if (tree->right && tree->left)
		{
			x += binary_tree_is_perfect(tree->left);
			x -= binary_tree_is_perfect(tree->right);
		}
		else if (!(tree->left) && !(tree->right))
			return (1);
		else
			return (0);
	}
	return (x);
}
