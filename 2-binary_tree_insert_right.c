#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_insert_right - insert right child to another node
  *
  * @parent: parent node
  *
  * @value: value to the new node
  *
  * Return: pointer to the new node
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	int val;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->right == NULL)
		parent->right = new;
	else
	{
		val = parent->right->n;
		free(parent->right);
		parent->right = new;
		parent->right->right = binary_tree_node(new, val);
	}
	return (new);
}
