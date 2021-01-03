#include <bits/stdc++.h>
#define N 0
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
void levelOrder(Node *root);
void inOrder(Node *root);
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
    	checkIfBinary (root->left) &&
    	checkIfBinary(root->right)
      ) 
    return true;
    else
    return false;
}

bool binaryOrNot(Node *root,int min,int max){
	if(root==NULL) return true;

	if(root->data >min && root->data<max  && binaryOrNot(root->left,min,root->data) && binaryOrNot(root->right,root->data,max) )
		return true;
	else 
		return false;
}

Node* findMin(Node *root)
{
    Node *current = root;
    while (current->left != NULL)
        current = current->left;
    return current;
}

Node* deleteNode(Node* root,int data){
    if(root==NULL) return root;
    else if(data>root->data ){
        root->right=deleteNode(root->right,data);
    }
    else if(data<root->data){
        root->left=deleteNode(root->left,data);
    }
    else {
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;
        }
        else if(root->left==NULL){
            Node* temp=root;
            root=root->right;
            free(temp);
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            free(temp);
        }
        else
        {
            Node* temp=findMin(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
    }
    return root;
}

Node* nullify;

Node* search(Node* root,int data){
    if(root==NULL) return NULL;
    if(root->data==data) return root;
    else if(data > root->data)
        return search(root->right, data);
    else 
        return search(root->left, data);
}

Node* findSuccessor(Node* root,int data)
{
    Node *temp=search(root,data);
    if(temp==NULL) return NULL;
    else if(temp->right!=NULL)
        findMin(temp->right);
    
    else
    {
        Node* successor=NULL;
        Node* ancestor=root;

        while(ancestor!=temp){
            if(temp->data<ancestor->data){
                successor=ancestor;
                ancestor=ancestor->left;
            }
        
            else 
                ancestor=ancestor->right;
        }
        return successor;
    }
    return NULL;
}

vector<int> vec;

void rightView(Node* root,int* maxLevel,int level)
{
 if(root==NULL) return;
    if(*maxLevel <level){
        vec.push_back(root->data);
         *maxLevel=level;
    }
    rightView(root->right,maxLevel,level+1);
    rightView(root->left,maxLevel,level+1);
}

vector<int> rightView(Node* root){
    int maxLevel=0;
    rightView(root,&maxLevel,1);
    return vec;
} 

int heightTree(Node* root)
{
    if(root==NULL) return -1 ;
    return max(heightTree(root->left),heightTree(root->right))+1;
}

int main(){
   
    Node *root = new Node();
    root->data = 23;

    Node *rootL1 = new Node();
    rootL1->data = 15;
    root->left = rootL1;

    Node *rootL1L = new Node();
    rootL1L->data = 10;
    // root->left->left = rootL1L;

    Node *rootL1R = new Node();
    rootL1R->data = 16;
    // root->left->right = rootL1R;

    Node *rootR1 = new Node();
    rootR1->data = 30;
    root->right = rootR1;

    Node *rootR1L = new Node();
    rootR1L->data = 25;
    // root->right->left = rootR1L;

    Node *rootR1R = new Node();
    rootR1R->data = 29;
    // root->right->right = rootR1R;

   cout<< "Height "<<heightTree(root);
    
}

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " ";
        if (temp->left != NULL)
            q.push(temp->left);
        if (temp->right != NULL)
            q.push(temp->right);
        q.pop();
    }
}
void inOrder(Node *root)
{ //root is a pointer to structure here
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
