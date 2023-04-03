#include "binary_trees.h"

/**
 * binary_tree_insert_left - this is a  function that inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: Pointer to the created node or
 *         NULL on failure of if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    //if parent is null, return NULL
    if (!parent)
        return (NULL);

    //declare the new_node
    new_node = malloc(sizeof(binary_tree_t));

    //if no new_node, return NULL
    if (!new_node)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->right = NULL;
    new_node->left = parent->left;
    parent->left = new_node;
    if (new_node->left)
        new_node->left->parent = new_node;
    return (new_node);
}

