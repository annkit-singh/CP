#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void insertFirst(Node **head,int data){
    Node* n=new Node();
    n->data=data;
    n->next=*head;
    *head=n;
}
void appendLast(Node **head,int data){
    Node* n=new Node();
    n->data=data;
    n->next=NULL;
    Node* itr=*head;
    while(itr->next!=NULL){
        itr=itr->next;

    }
    itr->next=n;
    
}
void printLL(Node *head){
    while(head!=NULL){
        cout<<head->data<< " -> ";
        head=head->next;
    }
    cout<<"\n";
}
void deleteNode(Node **head,int key){
    Node* temp=*head;
    Node* prev=NULL;

    if(temp!=NULL && temp->data==key){
        *head=temp->next;
        delete temp;
        return;
    }
    while(temp!=NULL && temp->data!=key){
        prev=temp;
        temp=temp->next;

    }
    if(temp==NULL){
        return;
    }
    prev->next=temp->next;
    delete temp;

}
int main(){
    Node* head=NULL;
    bool flag=true;
    while(flag){
        cout<<"1.To add in the first"<<endl;
        cout<<"2.To add in the last"<<endl;
        cout<<"3.To delete"<<endl;
        cout<<"4.To print"<<endl;
        cout<<"5.To exit"<<endl;
    int num;
    cin>>num;
        switch(num){
            case 1:
            int key;
            cin>>key;
            insertFirst(&head,key);
            printLL(head);
            break;

            case 2:
            int ke;
            cin>>ke;
            appendLast(&head,ke);
            printLL(head);
            break;

            case 3:
            int k;
            cin>>k;
            deleteNode(&head,k);
            printLL(head);
            break;

            case 4:
            printLL(head);
            break;
            
            case 5:
            flag=false;
            break;

            default:
            cout<<"Choice is invalid.Try again...";
            break;

        }

    }

    


    
}