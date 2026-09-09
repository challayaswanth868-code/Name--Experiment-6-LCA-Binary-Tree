# Experiment 6.2: Inorder Successor in BST

## Aim

To implement an efficient algorithm to find the inorder successor of a given node in a Binary Search Tree (BST) using the BST property.

## Problem Statement

Given the root of a Binary Search Tree and a node `p` in the tree, find the inorder successor of `p`.

The inorder successor is the node with the smallest key strictly greater than `p.val`.

If no such node exists, return `null`.

## Example

Binary Search Tree:

```text
        5
       / \
      3   6
     / \
    2   4
   /
  1