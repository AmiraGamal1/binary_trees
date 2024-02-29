#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_insert_left - insert left child to another node
  *
  * @parent: parent node
  *
  * @value: value to the new node
  *
  * Return: pointer to the new node
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	int val;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (!new)
		return (NULL);
	if (parent->left == NULL)
		parent->left = new;
	else
	{
		val = parent->left->n;
		free(parent->left);
		parent->left = new;
		parent->left->left = binary_tree_node(new, val);
	}
	return (new);
}
