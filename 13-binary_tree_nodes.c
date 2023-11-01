#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary tree.
 *
 * @tree: Pointer to the tree to count the nodes from.
 *
 * Return: The number of nodes counted, or 0 if the tree is NULL.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

/**
 * binary_tree_size - Calculates the size of a binary tree.
 *
 * @tree: Pointer to the tree to measure the size of.
 *
 * Return: The size of the tree, or 0 if the tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_leaves - Counts the number of leaf nodes in a binary tree.
 *
 * @tree: Pointer to the tree from which to count the leaves.
 *
 * Return: The number of leaf nodes, or 0 if the tree is NULL.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
