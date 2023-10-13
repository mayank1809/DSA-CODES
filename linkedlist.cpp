#include<iostream>
using namespace std;
void insertathead(node* &head,int val);
class node
{
public:
int data;
node* next;
node(int val)
{
    data=val;
    next=NULL;

}
};
void insertattail(node*&head,int val)
{
    node* n=new node(val);
    if(head==NULL)
    {

        insertathead(head,val);
        return;
    }
//node* n=new node(val);
node* temp=head;
while(temp->next!=NULL)
{
    temp=temp->next;
}
temp->next=n;

}
void display(node* head)
{
    
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertathead(node* &head,int val)
{
node* n=new node(val);
n->next=head;
head=n;
}
bool search(node* head,int key)
    {
        node* temp=head;
        while(temp!=NULL)
        {
            if(temp->data==key)
            {
return true;
            }
            temp=temp->next;
        }
        return false;
    }
    void deleteathead(node* &head)
    {
        node* todelete=head;
        head=head->next;
        delete todelete;
    }
int main()
{
    node* head=NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    display(head);
    insertathead(head,23);
    display(head);
    int x;
    cout<<"element to be search"<<endl;
    cin>>x;
   cout<< search(head,x)<<endl;
   deleteathead(head);
    display(head);
    return 0;
}