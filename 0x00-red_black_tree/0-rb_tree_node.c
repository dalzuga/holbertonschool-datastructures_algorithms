#include "rb_trees.h"

/**
 * rb_tree_node - creates a red-black tree node
 *
 * @parent: parent of node
 * @value: the node's data contents
 * @color: the node's color
 *
 * Return: address of node created
 */
rb_tree_t *rb_tree_node(rb_tree_t *parent, int value, rb_color_t color)
{
  rb_tree_t *tmp;

  tmp = malloc(sizeof(rb_tree_t));
  if (tmp == NULL)
    return (NULL);

  tmp->n = value;
  tmp->color = color;
  tmp->parent = parent;
  tmp->left = NULL;
  tmp->right = NULL;

  return (tmp);
}
