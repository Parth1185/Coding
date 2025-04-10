class TreeNode{
    int data;
    TreeNode left;
    TreeNode right;

    TreeNode(int data){
        this.data=data;
        left=right=null;
    }
}
public class tree {
    public static void main(String[] args) {

        TreeNode root = new TreeNode(10);
        root.left = new TreeNode(5);
        root.right = new TreeNode(9);

        System.out.print(root.left.data + " ");
        System.out.print(root.right.data + " ");
        System.out.print(root.data + " ");
    }
}

