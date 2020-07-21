#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
    if(tree == NULL)
		  return(0);
    if(tree->left == NULL && tree->right == NULL)
      return(0);
    return(1 + (MAX(binary_tree_height(tree->left), binary_tree_height(tree->right))));
}
