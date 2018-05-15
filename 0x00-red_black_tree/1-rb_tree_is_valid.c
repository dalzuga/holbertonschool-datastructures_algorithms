#include "rb_trees.h"

/**
 * rb_tree_is_valid - checks if an rb tree is valid
 *
 * @tree: root node pointer
 *
 * Return: 1 if valid rb-tree, 0 if not (or if tree is NULL)
 */
int rb_tree_is_valid(const rb_tree_t *tree)
{
  rb_tree_t const *node;

  if (tree == NULL)
    return (0);

  if (find_red_nodes(tree) == 1) /* if tree is not valid */
    return (1);

  if ((tree->color != BLACK) && (tree->color != RED))
    return (0);			/* root must be one or the other */

  node = tree;

  if ((node->left == NULL) || (node->right == NULL))
    return (0);			/* there must an address */

  if (am_i_a_leaf(node) == 0)
    {
      if (leaf_is_black(node) == 0)
    }

  return (1);			/* it's a valid rb_tree */
}

/**
 * find_red_nodes - checks red nodes in the tree
 *
 * @tree: root node pointer
 *
 * Return: 0 if a red node without two black children is found, 1 otherwise.
 */
int find_red_nodes(const rb_tree_t *tree)
{
  if (tree == NULL)
    return (0);

  if (tree->color == RED)
    {
      if (tree->left != NULL && tree->left->color == RED)
	return (1);
      if (tree->right != NULL && tree->right->color == RED)
	return (1);
    }

  if (tree->left != NULL)
    return (find_red_nodes(tree->left));
  if (tree->right != NULL)
    return (find_red_nodes(tree->right));

  return (0);
}

/**
 * am_i_a_leaf - checks if we're a NULL node.
 *
 * Return: 1 if yes, 0 if no.
 */
int am_i_a_leaf(const rb_tree_t *node)
{
  if (node->value == NULL)
    return (1);
  return (0);
}

/**
 * check_valid_node - checks if we're a valid node.
 *
 * Return: 0 if no, 1 if yes.
 */
int check_valid_node(const rb_tree_t *node)
{
  if ((node->left != NULL) && (node->right == NULL))
    return (0);
  if ((node->left == NULL) && (node->right != NULL))
    return (0);

  return (1);
}
