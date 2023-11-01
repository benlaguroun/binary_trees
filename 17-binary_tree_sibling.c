#include "binary_trees.h"

/**
 * binary_tree_sibling - Retrieve the sibling of a node in a binary tree.
 *
 * @node: Pointer to the node for which to find the sibling.
 *
 * Return: Pointer to the sibling node, or NULL if the node is NULL, the parent is NULL,
 *         or the node has no siblings.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}

