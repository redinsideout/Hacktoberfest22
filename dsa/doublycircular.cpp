#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
    struct node* pre;
};

struct node* head=NULL;
struct node* temp;

void insert ( int x)
{

    struct node* newnode;
        newnode=(struct node *) malloc(sizeof(struct node));
newnode->data=x;
newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
        temp=newnode;
        newnode->next=head;
        newnode->pre=head;
        
    }

    else{
        
        newnode->next=head;
        newnode->pre=temp;
        temp->next=newnode;

    }


}

// void del( int x)
// {
//     if(head==NULL)
//     {
//         cout<<"there is no node to be deleted";
//     }

//     else
//     {
//         struct node* temp;
//         temp=head;
//         while(temp->data!=x)
//         {
//             temp=temp->next;
//         }
        
//        temp->pre->next=temp->next;
        

//         free(temp);
//     }
// }

void display()
{
    struct node* temp;
    temp=head;

    while(temp->next!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    cout<<temp->data<<endl;
}

int main()
{
    insert(10);
    insert(11);
    display();
  

    return 0;
}
