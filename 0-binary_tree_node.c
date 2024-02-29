#include <stdlib.h>
#include "binary_trees.h"

/**
  * binary_tree_node - create a binary tree node
  *
  * @parent: parent node
  *
  * @value: value of the node
  *
  * Return: pointer to the new node
  */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = new->right = NULL;

	return (new);
}
