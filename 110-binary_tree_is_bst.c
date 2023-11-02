#include "binary_trees.h"

/**
 * binary_tree_is_bst - Determine whether a binary tree is a valid Binary Search Tree (BST).
 *
 * @tree: A pointer to the root node of the tree to be checked.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}

/**
 * btib_helper - Helper function to check if a binary tree is a valid Binary Search Tree (BST).
 *
 * @tree: A pointer to the root node of the tree to check.
 * @min: The lower bound for checked nodes.
 * @max: The upper bound for checked nodes.
 *
 * Return: 1 if the tree is a valid BST within the given bounds, 0 otherwise.
 */

int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
	/* -1 and +1 stem from "There must be no duplicate values" req */
}
