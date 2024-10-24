int countnodes(struct TreeNode* root){
    if(root==NULL)
    {
        return 0;
    }
    return 1+countnodes(root->right)+countnodes(root->left);
}
void postorder(struct TreeNode * root, int * arr, int * idx){
    if(root==NULL){
        return;
    }
    postorder(root->left,arr,idx);
    postorder(root->right,arr,idx);
    arr[(*idx)++]=root->val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=countnodes(root);
    int * arr = (int*)malloc((*returnSize)*sizeof(int));
    int idx=0;
    postorder(root,arr, &idx);
    return arr;
}