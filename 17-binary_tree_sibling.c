#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_sibling - sibling of the nodes
  *
  * @node: root node
  *
  * Return: silbing node
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
