#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Rotate a binary tree to the left.
 *
 * @tree: Pointer to the root node of the tree to be rotated.
 *
 * Return: Pointer to the new root node of the tree after the left rotation, or NULL upon failure.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp = NULL, *parent;

	if (!tree || !tree->right)
		return (NULL);
	tmp = tree;
	parent = tree->parent;
	tree = tree->right;
	tree->parent = NULL;
	if (tree->left)
	{
		tmp->right = tree->left;
		tree->left->parent = tmp;
	}
	else
		tmp->right = NULL;
	tmp->parent = tree;
	tree->left = tmp;
	if (parent)
		parent->right = tree;
	tree->parent = parent;
	return (tree);
}

