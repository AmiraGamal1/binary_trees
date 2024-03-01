#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_uncle - find uncle of the node
  *
  * @node: root node
  *
  * Return: uncle node
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node != NULL && (node->parent == NULL || node->parent->parent == NULL))
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else
		return (node->parent->parent->left);
}
