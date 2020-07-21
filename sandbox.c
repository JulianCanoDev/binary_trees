#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if(tree == NULL)
        return;
    else
    {
        liberation(tree);
    }
    return;
}

void liberation(binary_tree_t *node)
{

    if(node == NULL)
        return;
    liberation(node->right);
    liberation(node->left);

    free(node);
}


#include "binary_trees.h"

void binary_tree_delete(binary_tree_t *tree)
{
    if(tree != NULL)
    {
        binary_tree_delete(tree->left);
        binary_tree_delete(tree->right);

        free(tree);
    }
}



	binary_tree_t *current = NULL;
	binary_tree_t *parent = NULL;

	if(tree == NULL || func == NULL)
		return;
	current = tree;
	parent = NULL;

	while(1)
	{
		parent = current;
		if(current->left != NULL)
			current = current->left

	}
}