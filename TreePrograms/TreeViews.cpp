#include <bits/stdc++.h>
using namespace std;

struct Node
{   
    int data;
    Node *left;
    Node *right;
     Node(int key)  
    { 
        data = key; 
        left = right = NULL; 
    } 
};
void bottomView(Node* root){
    queue< pair<Node*,int> > q;
    map<int,int> mp;
    q.emplace(root,0);
    
    while(!q.empty() ){
        pair<Node*,int> front=q.front();
        q.pop();
        mp[front.second]=front.first->data;
        
        if(front.first->left!=NULL){
            q.push({front.first->left,front.second-1});
        }
        if(front.first->right!=NULL){
            q.push({front.first->right, front.second + 1});
        }  
    }
    for(auto ele:mp)
        cout<<ele.second<<" ";
}

void rightView(Node* root,int* maxLevel,int level){  //vd ==1  level==0
    if(root==NULL) return ;
    if(level>*maxLevel)
    { 
        cout<<root->data<<" ";
        *maxLevel=level;
     }
    rightView(root->right,maxLevel,level+1);
    rightView(root->left,maxLevel,level+1);
}
void rightView(Node *root){
    int maxLevel=0;
    rightView(root,&maxLevel,1);
}

void leftView(Node *root, int *maxLevel, int level)
{ 
    if (root == NULL)
        return;
    if (level > *maxLevel)
    {
        cout << root->data << " ";
        *maxLevel = level;
    }
    leftView(root->left, maxLevel, level + 1);
    leftView(root->right, maxLevel, level + 1);
}

void leftView(Node *root)
{
    int maxLevel = 0;
    leftView(root, &maxLevel, 1);
}

void topView(struct Node* root){
    queue< pair<int,Node*> > q;
    q.push({0,root});

    map<int, int> mp;
    while(!q.empty()){
        auto val=q.front();
        q.pop();
        mp.emplace(val.first ,val.second->data ) ;
        if(val.second->left!=NULL )
            q.push({val.first-1,val.second->left});
        if (val.second->right != NULL)
            q.push({val.first +1, val.second->right});
        }
        for(auto i:mp)
            cout<<i.second<<"|";       
}

int main(){
  /*

    Node* root=new Node(67);
    root->left=new Node(32);
    root->right=new Node(87);
    root->left->left=new Node(19);
    root->left->right=new Node(48);  
    root->right->left=new Node(78);
    root->right->right=new Node(90);
    root->left->right->left=new Node(38);
    */
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->right->right = new Node(5);
    root->left->right->right->right = new Node(6);
    topView(root);
   
    return 0;
}