// Experiment 6: Inorder Successor in BST

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode(int val) {
        this.val = val;
        this.left = null;
        this.right = null;
    }
}

public class inorder_successor_bst {

    public static TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode successor = null;

        while (root != null) {
            if (p.val >= root.val) {
                root = root.right;
            } else {
                successor = root;
                root = root.left;
            }
        }

        return successor;
    }

    public static void main(String[] args) {

        // Create the Binary Search Tree
        TreeNode root = new TreeNode(5);
        root.left = new TreeNode(3);
        root.right = new TreeNode(6);
        root.left.left = new TreeNode(2);
        root.left.right = new TreeNode(4);
        root.left.left.left = new TreeNode(1);

        // Select node p
        TreeNode p = root.left;  // Node 3

        // Find inorder successor
        TreeNode successor = inorderSuccessor(root, p);

        // Display output
        System.out.println("Experiment 6: Inorder Successor in BST");
        System.out.println("Node P: " + p.val);

        if (successor != null) {
            System.out.println("Inorder Successor: " + successor.val);
        } else {
            System.out.println("Inorder Successor: None");
        }
    }
}