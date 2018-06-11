#include "rb_trees.h"

rb_tree_t *rb_tree_insert(rb_tree_t **tree, int value)
{
  rb_tree_t *tmp;

  tmp = rb_tree_node(*tree, value, RED);

  if (value < (*tree)->n)	/* insert first node */
    (*tree)->left = tmp;
  else
    (*tree)->right = tmp;

  return (tmp);
}
