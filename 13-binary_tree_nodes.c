#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: root of tree
 * Return: number of nodes with 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		c = 1;

	c += binary_tree_nodes(tree->left);
	c += binary_tree_nodes(tree->right);

	return (c);
}
