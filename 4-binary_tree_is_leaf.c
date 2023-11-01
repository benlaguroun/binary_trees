#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 if it's not a leaf or if the node is NULL.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}