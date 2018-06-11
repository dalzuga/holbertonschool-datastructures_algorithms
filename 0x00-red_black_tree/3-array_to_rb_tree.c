#include "rb_trees.h"

rb_tree_t *array_to_rb_tree(int *array, size_t size)
{
  size_t i;

  for (i = 0; i < size; i++)
    rb_tree_insert(array[i], size);
}
