#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: ptr to tree
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	const binary_tree_t *ptr;
	int i = 0;

	if (!tree)
		return (1);
	ptr = tree;
	if (ptr->left)
		while (ptr->left)
		{
			ptr = ptr->left;
			i++;
		}

	/*printf("height = %d\n", i);*/
	if ((perfect_return(tree, i) - 1) == i)
		return (1);
	return (0);}

/**
 * perfect_return - returns if tree is perfect or not
 * @tree: the binary tree
 * Return: value corresponding to if tree is perfect
 */
int perfect_return(const binary_tree_t *tree, int height)
{
	int l = 0, r = 0;

	/*printf("node - n = %d\n", tree->n);*/
	if (!tree)
		return (-1);

	if (tree->right || tree->left)
	{
		l = perfect_return(tree->left, height);
		r = perfect_return(tree->right, height);
	}

	/*printf("l = %d, r = %d, height %d\n", l, r, height);*/
	if (l == -1 || r == -1)
		return (-1);
	if (l > r)
		return (l + 1);
	return (r + 1);
}