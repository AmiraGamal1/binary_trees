#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_inorder - in-order traversal
  *
  * @tree: root node
  *
  * @func: pointer to function to call
  *
  * Return: nothings
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
