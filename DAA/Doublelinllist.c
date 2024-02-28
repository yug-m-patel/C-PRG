#include<stdio.h>
#include<stdlib.h>
struct Doubley
{
    int data;
    struct Doubley *next;
    struct Doubley *prev;
};
typedef struct Doubley doubley;
doubley *head = NULL;
doubley *new_node(int value)
{
    doubley *temp = (doubley*)malloc(sizeof(doubley));
    if(temp == NULL)
    {
        printf("No Stroage Available");
    }
    else
    {
        temp->data=value;
        temp->next=NULL;
        temp->prev=NULL;
    }
    return temp;
}
void display()
{
    if(head==NULL)
    {
        printf("No Linked List Present");
    }
    else
    {
        doubley *temp = head;
        while(temp != NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
doubley *traverse(int i)
{
    doubley *temp = head;
    for(int j=1;j<i;j++)
    {
        temp=temp->next;
    }
    return  temp;
}
void insert_beg(int value)
{
    doubley *new = new_node(value);
    if(head==NULL)
    {
        head=new;
        
    }
    else
    {
        
        new->next=head;
        head->prev=new;
        head=new;
    }
}
void insert_end(int val)
{
    doubley *new = new_node(val);
    if(head == NULL)
    {
        head=new;
    }
    else
    {
        doubley *temp = head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new;
        new->prev=temp;
    }
}
void insert_any(int pos,int val)
{
    
    if (pos==1)
    {
        insert_beg(val);
    }
    else
    {
        doubley *new=new_node(val);
        doubley *temp = traverse(pos-1);
        temp->next->prev=new;
        new->next=temp->next;
        new->prev=temp;
        temp->next=new;
    }
}
void delete_beg()
{
    if(head == NULL)
    {
        printf( " Linled List is empty\n" );
    }
    else
    {
        doubley *temp = head;
        head->next->prev=head;
        head=temp->next;
        temp->next=NULL;
        free(temp);
    }
}
void delete_end()
{
    if(head == NULL)
    {
        printf("Linked List Is Empty\n");
    }
    else
    {
        doubley *temp = head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        doubley *node = temp->next;
        temp->next=NULL;
        temp->prev=NULL;
        free(node);
    }
}
void del_any(int pos)
{
    if(pos == 1)
    {
        delete_beg();
    }
    else
    {
        doubley *temp=traverse(pos);
        if(temp == NULL)
        {
            printf("list Not Present\n");

        }
        else
        {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;
            temp->prev=NULL;
            temp->next=NULL;
            free(temp);
        }
    }
}
void main()
{
    insert_beg(10);
    insert_beg(20);
    insert_end(30);
    insert_any(1,30);
    insert_end(50);
    insert_any(2,20);
    delete_beg();
    delete_end();
    del_any(2);
    display();
}