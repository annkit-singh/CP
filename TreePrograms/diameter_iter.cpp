
int height(Node *root){
    if(root==NULL) return -1;
    else
    return max(height(root->left),height(root->right))+1;    
}

int diameter(Node *root){
if(root==NULL)  return 0;

   int height1 = height(root->left);
   int height2 = height(root->right);

   int diam1= diameter(root->left);
   int diam2= diameter(root->right);

   return max(height1+height2 +1, max(diam1,diam2));
}

void inorder(Node* root){
    if(root==NULL) return ;
    cout << root->data <<" | ";
    inorder(root->left);
    inorder(root->right);
}

Node* mirrorify(Node* root){
    if(root==NULL) return NULL;
    Node* mirr=new Node(root->data);
    mirr->left=mirrorify(root->right);
    mirr->right=mirrorify(root->left);
    return mirr;
}
void inorderIter(Node *root){
   Node* curr=root;
   stack<Node*> st;
   while(!st.empty()  || curr!=NULL){
       if(curr!=NULL){
           st.push(curr);
            curr=curr->left;
       }
       else
       {
           Node* temp=st.top();
           cout<<temp->data<<" ";
           st.pop();
           curr=temp->right;
       }
   }
}

void preOrderIter(Node *root){
    Node* curr=root;
    stack<Node*> st;
    st.push(curr);
    while(!st.empty()){
        Node* temp=st.top();
        cout<<temp->data<<" ";
        st.pop();
        if (temp->right != NULL)
            st.push(temp->right);
        if (temp->left != NULL)
            st.push(temp->left);
    }
}

void postOrderIter(Node *root){
    stack<Node*> st1;
    stack<int> st2;
    st1.push(root);

    while(!st1.empty()){
    Node* temp=st1.top();
    st1.pop();
    st2.push(temp->data);
    if (temp->left != NULL)
    {
        st1.push(temp->left);
    }
    if (temp->right != NULL)
    {
        st1.push(temp->right);
      }
    
    }
    while(!st2.empty()){
        int temp=st2.top();
        cout<<temp<<" ";
        st2.pop();
    }
}

int main(){
    Node* root=new Node(67);
    root->left=new Node(32);
    root->right=new Node(87);
    root->left->left=new Node(19);
    root->left->right=new Node(48);  
    root->right->left=new Node(78);
    root->right->right=new Node(90);
    // root->left->right->left=new Node(38);
    postOrderIter(root);
    
    return 0;
}