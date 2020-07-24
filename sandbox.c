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


#include "binary_trees.h"
#include <stdio.h>

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	size_t depth_first = 0;
	size_t depth_second = 0;
	size_t depth_balance = 0;
	size_t i = 0;
	const binary_tree_t *tmp_first = NULL;
	const binary_tree_t *tmp_second = NULL;

	if (first == NULL || second == NULL)
		return (NULL);
	tmp_first = first;
	tmp_second = second;
	depth_first = binary_tree_depth(first); /*Measure Depth*/
	depth_second = binary_tree_depth(second); /*Measure Depth*/
	if (depth_first > depth_second)
	{
		depth_balance = depth_first - depth_second;
		while (i < depth_balance) /*Go up until at the same level*/
		{
			tmp_first = tmp_first->parent;
			i++;
			if (tmp_first == second) /*Validates third case TEST*/
				return ((binary_tree_t *)second);
		}
		while (tmp_second != NULL && tmp_first != NULL)
		{
			tmp_first = tmp_first->parent;
			tmp_second = tmp_second->parent;
			if (tmp_first == tmp_second)
				return ((binary_tree_t *)tmp_first);
		}
		return (NULL);
	}
	if (depth_second > depth_first)
	{
		depth_balance = depth_second - depth_first;
		while (i < depth_balance) /*Go up until at the same level*/
		{
			tmp_second = tmp_second->parent;
			i++;
			if (tmp_second == first)
				return ((binary_tree_t *)first);
		}
		while (tmp_second != NULL && tmp_first != NULL)
		{
			tmp_first = tmp_first->parent;
			tmp_second = tmp_second->parent;
			if (tmp_first == tmp_second)
				return ((binary_tree_t *)tmp_first);
		}
		return (NULL);
	}
	else
	{
		while (tmp_second != NULL && tmp_first != NULL)
		{
			tmp_first = tmp_first->parent;
			tmp_second = tmp_second->parent;
			if (tmp_first == tmp_second)
				return ((binary_tree_t *)tmp_first);
		}
	}
	return (NULL);
}

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: Tree to gget depth
 * Return: Tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
