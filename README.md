# Experiment 2.2 – Lowest Common Ancestor of a Binary Tree

**Subject:** CC-II (24CSP-339)  
**LeetCode:** #236 – Lowest Common Ancestor of a Binary Tree

## Aim
Implement the Lowest Common Ancestor (LCA) of two nodes in a general binary tree using single-pass recursive DFS.

## Problem
Given a binary tree and two nodes `p` and `q`, return their lowest common ancestor. A node is considered a descendant of itself.

## Algorithm
1. If the current node is `null`, return `null`.
2. If the current node is `p` or `q`, return the current node.
3. Recursively search the left subtree.
4. Recursively search the right subtree.
5. If both recursive calls return a node, the current node is the LCA.
6. Otherwise, return whichever side returned a non-null node.

## Complexity
- Time: O(n)
- Auxiliary space: O(h), where h is the tree height.

## Example
Tree: `[3,5,1,6,2,0,8,#,#,7,4]`  
`p = 5`, `q = 1`  
Output: `3`

## Files
- `lca_binary_tree.py` – Python implementation
- `lca_binary_tree.java` – Java implementation
- `lca_binary_tree.cpp` – C++ implementation

## GitHub Submission
```bash
git init
git add .
git commit -m "Add Experiment 2.2 LCA of Binary Tree"
git branch -M main
git remote add origin https://github.com/<YOUR_USERNAME>/<YOUR_REPOSITORY>.git
git push -u origin main
```

If the repository already has files:
```bash
git add .
git commit -m "Add Experiment 2.2 LCA of Binary Tree"
git push
```
