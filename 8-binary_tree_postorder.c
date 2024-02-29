#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_postorder - in-order traversal
  *
  * @tree: root node
  *
  * @func: pointer to function to call
  *
  * Return: nothings
  */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
