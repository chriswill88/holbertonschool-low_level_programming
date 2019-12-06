#include "binary_trees.h"
/**
 * binary_tree_height - get the height of a node
 * @tree: ptr to tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
		return (_lambda4(tree, 0));
	return (0);
}

/**
 * _lambda4 - gets height
 * @tree: returns size
 * @n: size to return
 * Return: height
 */
size_t _lambda4(const binary_tree_t *node, size_t n)
{
	if (node->left)
		_lambda4(node->left, n += 1);
	if (node->right)
		_lambda4(node->right, n += 1);
	return (n);
}
