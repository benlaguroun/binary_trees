#include "binary_trees.h"

/**
 * binary_trees_ancestor - Retrieve the lowest common ancestor of two nodes in a binary tree.
 *
 * @first: Pointer to the first node for which to find the ancestor.
 * @second: Pointer to the second node for which to find the ancestor.
 *
 * Return: Pointer to the ancestor node, or NULL if there is no common ancestor.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree.
 *
 * @tree: Pointer to the node for which to calculate the depth.
 *
 * Return: The depth of the node, or 0 if the tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
