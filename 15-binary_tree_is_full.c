#include "binary_trees.h"

/**
 * binary_tree_is_full - Determine if a binary tree is a full tree.
 *
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a full tree, 0 if it's not, or 0 if the tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
