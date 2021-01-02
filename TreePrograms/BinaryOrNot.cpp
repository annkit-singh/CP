#include <bits/stdc++.h>
#define N 0
using namespace std;

    struct Node
{
    int data;
    Node *left;
    Node *right;
};
void inOrder(Node *root){  //root is a pointer to structure here
if(root==NULL) return ;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
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
int main(){

Node* root=new Node();
root->data=23;

Node *rootL1=new Node();
rootL1->data=15;
root->left=rootL1;

Node *rootL1L=new Node();
rootL1L->data=10;
root->left->left=rootL1L;

Node *rootL1R= new Node();
rootL1R->data = 16;
root->left->right = rootL1R;

Node *rootR1 = new Node();
rootR1->data = 30;
root->right=rootR1;

Node *rootR1L=new Node();
rootR1L->data=25;
root->right->left=rootR1L;

Node *rootR1R= new Node();
rootR1R->data = 29;
root->right->right = rootR1R;


cout<<"Status "<<binaryOrNot(root,INT_MIN,INT_MAX)<<"\n";
inOrder(root);
}
