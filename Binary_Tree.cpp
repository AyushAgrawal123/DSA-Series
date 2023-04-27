#include <iostream>
using namespace std;
#include <queue>
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
node *buildTree(node *root)
{
    cout << "Enter the  data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter the data for inserting in left  of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;
}
void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // previous level complete
            cout << endl;
            if (!q.empty()) // node still have some child nodes
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }

            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // left root right
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    //  root left right
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    // left right root
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{

    node *root = NULL;
    root = buildTree(root);
    cout << "Printing the level order traversal " << endl;
    levelOrderTraversal(root);

    cout << "Inorder traversal is ";
    inorder(root);
    cout << endl;
    cout << "preorder traversal is ";
    preorder(root);
    cout << endl;
    cout << "postorder traversal is ";
    postorder(root);
    cout << endl;
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
