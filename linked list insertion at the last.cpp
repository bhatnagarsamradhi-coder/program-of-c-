#include<iostream>
#include<cstdlib>
using namespace std;
struct node{
    int data;
    struct node*next;
};
int main()
{
    struct node*start=NULL;
    struct node*ptr;
    int n,val;
    cout<<"number of nodes";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"insert node"<<i+1<<"value";
        cin>>val;
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->next=NULL;
        if(start==NULL)
        start=newnode;
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=newnode;
        }
    }
    cout<<"existing linked listed list is";
    ptr=start;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
        cout<<"value to insert at last";
        cin>>val;
        struct node* newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=val;
        newnode->next=NULL;
        if(start==NULL)
        start=newnode;
        else
        {
            ptr=start;
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=newnode;
        }
        cout<<"after insertion at last";
        ptr=start;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<"->";
            ptr=ptr->next;
        }
        cout<<"NULL";
        cout<<"freeing merory.....";
        ptr=start;
        while(ptr!=NULL)
        {
            struct node* newnode=ptr->next;
            free(ptr);
        ptr=newnode;
        }
            start=NULL;
            return 0;
    }
}
