#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a new node as the left child of the parent node.
 *
 * @parent: Pointer to the parent node.
 * @value: Value to be stored in the new node.
 * Return: A pointer to the new node, or NULL if it fails.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
if (parent == NULL)
{
return (NULL);
}
new_node = binary_tree_node(parent, value);
if (new_node == NULL)
{
return (NULL);
}
if (parent->left != NULL)
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;
return (new_node);
}
