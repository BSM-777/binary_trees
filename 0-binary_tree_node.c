#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Creates a new node.
 * @parent: The parent node, or NULL if it's the root.
 * @value: The value to be stored in the new node.
 * 
 * Returns: A pointer to the new node if successful, otherwise NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;
    
	new_node = malloc(sizeof(binary_tree_t));
    
    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->parent = parent;
    new_node->n = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
