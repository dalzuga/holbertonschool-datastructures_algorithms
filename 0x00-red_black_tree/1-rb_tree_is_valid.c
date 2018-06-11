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
  if (tree == NULL)
    {
      return (2); 		/* undefined */
    }

  if (bst_tree_is_valid(tree) == 0)
    return (0);

  if (check_red_nodes(tree) == 0)
    return (0);

  return ();
}

/**
 * bst_tree_is_valid - checks bst tree property
 *
 * @tree: root node pointer
 *
 * Return: 1 if valid bst tree, 0 if not.
 */
int bst_tree_is_valid(const rb_tree_t *tree)
{
  /* 'strictly less' means '<' */
  /* the opposite of '<' is '>=' */

  int aux = 0;

  /* the node holds a number */
  if ((tree->left == NULL) && (tree->right == NULL))
    {
      /* the node is by itself */
      return (1);
    }

  if (tree->left != NULL)
    {
      if (!(tree->left->n < tree->n))
	{
	  return (0);		/* node on the left is bigger */
	}
      else
	{
	  aux = bst_tree_valid(tree->left);
	}
    }

  if (aux == 0)
    return (0);

  if (tree->right != NULL)
    {
      if (tree->right->n >= tree->n)
	{
	  return (1);		/* node on the right is bigger */
	}
      else
	{
	  aux = bst_tree_valid(tree->right);
	}
    }

  if (aux == 0)
    return (0);
  else
    return (1);
}

int check_red_nodes()
{

}
