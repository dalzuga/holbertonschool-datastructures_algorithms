#include "rb_trees.h"

rb_tree_t *rb_tree_remove(rb_tree_t *root, int n)
{
  copy_into_array(root, array);
  remove_from_array(array, n);
  root = create_tree_from_array(array);

  return (root);
}
