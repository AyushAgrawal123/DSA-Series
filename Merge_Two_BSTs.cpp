#include <bits/stdc++.h> 
/*************************************************************
    
    Following is the Binary Tree node structure:

    class TreeNode{

        public :
            int data;
            TreeNode *left;
            TreeNode *right;

            TreeNode(int data) {
                this -> data = data;
                left = NULL;
                right = NULL;
            }

            ~TreeNode() {
            if (left){
            delete left;
            }

            if (right){
            delete right;
            }
        }   
    };

*************************************************************/
vector<int>mergeArrays(vector<int>&a, vector<int>&b){
     vector<int>ans(a.size()+b.size());
     int i=0,j=0,k=0;
     while(i<a.size() && j<b.size()){
         if(a[i]<b[j]){
             ans[k++] = a[i];
             i++;
         }
         else{
             ans[k++] = b[j];
             j++;
         }
     }
     while(i<a.size()){
         ans[k++]=a[i];
         i++;
     }

     while(j<b.size()){
         ans[k++]=b[j];
         j++;
     }
     return ans;
 }

 
void inorder(TreeNode<int>* root, vector<int>&in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}
TreeNode<int>* inOrderToBst(int s, int e, vector<int> &in){
    if(s>e){
        return NULL;
    }
    int mid= (s+e)/2;

    TreeNode<int>* newRoot= new TreeNode<int>(in[mid]);
    newRoot->left= inOrderToBst(s, mid-1,  in);
    newRoot->right = inOrderToBst(mid+1, e,  in);
    return newRoot;
} 


TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<int>bst1,bst2;
     // step 1 :  find inorder of both the trees;

     inorder(root1,bst1);
     inorder(root2,bst2);

    // step 2: merge both inorder vector into an another vector

    vector<int> MergeArray = mergeArrays(bst1,bst2);

    // step 3: use merged vectors to create BST

    int s=0,e=MergeArray.size()-1;
    return inOrderToBst(s,  e, MergeArray);

}
