#include <bits/stdc++.h>
#define N 0
using namespace std;
bool isBstGreater(Node*, int );
bool isBstLesser(Node*, int );

    struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node* getNewNode(int data){
    Node *temp=new Node();
    temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

Node* insertNode(Node *root,int data){
    if(root==NULL){
        root=getNewNode(data);
    }
    else if(data> root->data)
        root->right=insertNode(root->right,data);
    else
        root->left=insertNode(root->left,data);
    return root;
}

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

bool searchANode(Node *root,int data){
     if(root==NULL)
        return false ;
     else if(root->data==data)
        return true ;
     else if(data>root->data)
       return  searchANode(root->right,data);
     else
      return   searchANode(root->left,data);
}

int findMin(Node *root){
Node *current=root;
while(current->left!=NULL)
    current=current->left;

return current->data;
}

int findMax(Node *root){
    Node *current = root;
    while (current->right != NULL)
    {
        current = current->right;
    }
    return current->data;
}
int recurFindMin(Node *root){
    if(root->left==NULL)
        return root->data;
    else
    return recurFindMin(root->left);
}

int heightOfTree(Node *root){
    if(root==NULL){
        return -1;
    }
    return max(heightOfTree(root->left),heightOfTree(root->right)) +1;
}

void levelOrder(Node *root){
    if(root==NULL){
        cout<<"Queue is empty";
    }
    queue <Node*> que;
    que.push(root);
    while(!que.empty()){
        Node *curr=que.front();
        cout<< curr->data<<" ";
        if(curr->left!=NULL) que.push(curr->left);
        if(curr->right!=NULL)    que.push(curr->right);
        que.pop();   
        } 
}

void inOrder(Node *root){  //root is a pointer to structure here
if(root==NULL) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    inOrder(root->left);
   
    inorder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

bool isBstLesser(Node *root,int data){
    if(root==NULL)
        return true;
    
    if( root->data < data  && 
        isBstLesser(root->left,data) && 
        isBstLesser(root->right,data) )
        return true;
    return false;
    }
bool isBstGreater(Node *root, int data)
    {
        if (root == NULL)
            return true;
        if ( root->data > data && isBstGreater(root->left, data) && isBstGreater(root->right, data) )
            return true;

        return false;
    }

bool checkIfBinary(Node *root){
    if(root==NULL) return true;
    if( isBstGreater(root->right,root->data)  && 
    isBstLesser(root->left,root->data) && 
    checkIfBinary(root->left) &&
      checkIfBinary(root->right)  ) 
    return true;
    else
    return false;
}

int main(){
Node *root=NULL;
Node *rootL1=new Node();
rootL1->data=134;
root->left=rootL1;

Node *rootR1 = new Node();
rootR1->data = 67;
root->right=rootR1;

inOrder(root);

// cout<<checkIfBinary(root);

//   root= insertNode(root,100);
//   root= insertNode(root,92);
//   root= insertNode(root,118);
//   root= insertNode(root,104);
//   root= insertNode(root,34);
//   root= insertNode(root,54);
//   root= insertNode(root,12);
//   root= insertNode(root,55);
//   root= insertNode(root,134);
//   root= insertNode(root,10);
//   root= insertNode(root,11);
//   root= insertNode(root,101);
//   root= insertNode(root,103);
//   root= insertNode(root,129);
//   root= insertNode(root,138);

//   levelOrder(root);

// inOrder(root);
return 0;
}