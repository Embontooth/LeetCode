void inorder(struct TreeNode*, int*, int*);
int countNodes(struct TreeNode* root);
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize=countNodes(root);
    int*arr=(int*)malloc((*returnSize)*sizeof(int));
    int idx=0;
    inorder(root, arr, &idx);
    return arr;
}
void inorder(struct TreeNode* root, int * arr, int * idx){
    if(root==NULL){
        return;
    }
    inorder(root->left,arr,idx);
    arr[(*idx)++]=root->val;
    inorder(root->right,arr,idx);
}
int countNodes(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}
