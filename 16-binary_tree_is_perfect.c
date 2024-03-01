#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_is_full - check if a binary tree is full
  *
  * @tree: root of the tree
  *
  * Return: 1 if full 0 otherwise
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree != NULL && (tree->left == NULL && tree->right == NULL))
		return (1);
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
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
  * binary_tree_is_perfect - check if the tree is perfect
  *
  * @tree: root node
  *
  * Return: 1 if it perfect 0 otherwise
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 && (binary_tree_height(tree->left) ==\
				binary_tree_height(tree->right)))
		return (1);
	return (0);
}
