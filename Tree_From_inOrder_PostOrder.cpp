

/* Tree node structure

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/

//Function to return a tree created from postorder and inoreder traversals.
   // finding the position of root node of preorder in inorder 
 void  createMapping(int in[], int n, map<int , int> &nodeToIndex){
        for(int i=0;i<n;i++){
            nodeToIndex[in[i]]=i;
        }
    }
      Node* solve(int in[],int post[], int &index, int InOrderStart,int InOrderEnd,int n,  
    map<int , int> &nodeToIndex){
        if(index < 0 || InOrderStart > InOrderEnd){
            return NULL;
        }
        
        int element= post[index--];
        Node* root= new Node(element);
        int position =nodeToIndex[element];
        
        root->right= solve(in,post,index,position+1,InOrderEnd,n, nodeToIndex);
        root->left=solve(in,post,index,InOrderStart,position-1,n, nodeToIndex);

        return root;
    }
    
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    map<int ,int > nodeToIndex;
        // Code here
        int postOrderIndex=n-1;
        createMapping(in,n, nodeToIndex);
       Node* ans =  solve(in,post,postOrderIndex,0,n-1,n,nodeToIndex);
       return ans;
}
