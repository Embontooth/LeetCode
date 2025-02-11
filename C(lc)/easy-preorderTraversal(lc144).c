int countnodes(struct TreeNode * root);
void preorder(struct TreeNode*root, int * arr, int * idx);
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = countnodes(root);
    int * arr = (int *)malloc((*returnSize)*sizeof(int));
    int idx=0;
    preorder(root, arr, &idx);
    return arr;
}
int countnodes(struct TreeNode * root){
    if(root==NULL){
        return 0;
    }
    return 1+countnodes(root->left)+countnodes(root->right);
}
void preorder(struct TreeNode*root, int * arr, int * idx){
    if(root==NULL){
        return;
    }
    arr[(*idx)++]=root->val;
    preorder(root->left, arr, idx);
    preorder(root->right, arr, idx);
}