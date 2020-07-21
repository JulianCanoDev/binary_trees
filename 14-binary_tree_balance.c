#include "binary_trees.h"

int balance_height(const binary_tree_t *tree)
{
    if(tree == NULL)
        return(0);
    return(1 + (MAX(balance_height(tree->left), balance_height(tree->right))));
}

int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
    {
        return(0);
    }
    return(balance_height(tree->left) - balance_height(tree->right));
}
