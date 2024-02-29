#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_leaves - num of leaves
  *
  * @tree: root node
  *
  * Return: number of leaves
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL && tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		leaves += 1;
	if (tree->right != NULL)
		leaves += 1;
	return (leaves);
}
