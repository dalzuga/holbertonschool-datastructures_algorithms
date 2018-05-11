#include "rb_trees_h"

/**
 * rb_tree_is_valid - checks if an rb tree is valid
 *
 * @tree: root node pointer
 *
 * Return: 1 if valid rb-tree, 0 if not (or if tree is NULL)
 */
int rb_tree_is_valid(const rb_tree_t *tree)
{
  rb_tree_t *node;

  if (tree == NULL)
    return (0);

  if ((tree->color != BLACK) && (tree-->color != RED))
    return (0);			/* root must be one or the other */

  return (1);			/* it's a valid rb_tree */
}
