#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_height - measures the height of a binary tree
  *
  * @tree: root
  *
  * Return: height of the tree
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left >= right)
		return (left + 1);
	return (right + 1);
}
/**
  * binary_tree_balance - measures the balance factor
  *
  * @tree: root node
  *
  * Return: balance factor
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
