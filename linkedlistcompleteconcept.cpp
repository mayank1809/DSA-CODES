#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)    
    {
        data = val;
        next = NULL;
    }
};
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool search(node *&head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
void deleteathead(node* &head)
{
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head , int val)
{
    if(!head) return; 
    
    
    if(head->data == val)
    {
        deleteathead(head);
        return;
    }



    node* temp=head;
    while(temp->next!=NULL && temp->next->data!=val)
    {
        temp=temp->next;
    }
    if(temp->next == NULL) return;
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertathead(head, 76);
    //display(head);
    insertathead(head, 43);
    insertattail(head, 90);
    //cout << search(head, 90);
    deletion(head,43);
    display(head);
    return 0;
}