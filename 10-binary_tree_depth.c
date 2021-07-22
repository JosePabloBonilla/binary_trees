#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node
 * @tree: root of tree
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		d = 1 + binary_tree_depth(tree->parent);
	}
	return (d);
}
