#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: root of tree
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t c = 1;

	if (!tree)
		return (0);

	c += binary_tree_size(tree->left);
	c += binary_tree_size(tree->right);

	return (c);
}
