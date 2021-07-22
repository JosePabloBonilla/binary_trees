#include "binary_trees.h"
/**
 * binary_tree_height - function that measures height of tree
 * @tree: pointer of tree root
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left, height_right = 0;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	if (height_left > height_right)
		return (height_left + 1);
	else
		return (height_right + 1);
}
/**
 * binary_tree_balance - measure tree balance
 * @tree: pointer of tree root
 * Return: number of leaves
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
