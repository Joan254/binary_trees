#include "binary_trees.h"

/**
 * compare_depth - Calculates depth of a binary tree
 * @tree: Pointer to the root node
 *
 * Return: maximum depth of any leaf node in the tree
 */
int compare_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect otherwise 0
 * If tree is NULL, return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree && (tree->left == NULL && tree->right == NULL))
		return (1);

	left_height = compare_depth(tree->left);
	right_height = compare_depth(tree->right);

	if ((left_height - right_height) == 0)
		return (1);

	return (0);
}
