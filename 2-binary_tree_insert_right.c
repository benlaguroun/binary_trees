#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a new node as the right child of the parent node.
 *
 * @parent: Pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node on success, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
