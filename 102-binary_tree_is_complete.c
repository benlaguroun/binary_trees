#include "binary_trees.h"

/**
 * binary_tree_is_complete - Determine if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 if it's not, or 0 if the tree is NULL.
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}

/**
 * btic_helper - Helper function to check if a binary tree is complete.
 *
 * @tree: Pointer to the root node of the tree to check.
 * @index: Node index to check.
 * @size: Number of nodes in the tree.
 *
 * Return: 1 if the tree is complete, 0 if it's not, or 0 if the tree is NULL.
 */

int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_size - Calculate the size of a binary tree.
 *
 * @tree: Pointer to the tree for which to measure the size.
 *
 * Return: The size of the tree, or 0 if the tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}
