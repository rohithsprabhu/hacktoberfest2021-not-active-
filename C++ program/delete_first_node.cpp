#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data =x;
        next=NULL;

    }
};
Node *delHead(Node *head)
{
    if(head==NULL)
    return NULL;
    else 
    {
        Node *temp=head->next;
        delete head;
        return temp;

    }
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node (30);
    head->next->next->next=new Node(40);
    
    printList(delHead(head));
    return 0;
}
