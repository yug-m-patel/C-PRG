#include<stdio.h>
#include<stdlib.h>

struct Nodes
{
    int data;
    struct Nodes *next;
    
};
typedef struct Nodes node;
node *head=NULL;
node *new_node(int val)
{
    node *newNodeAdd = (node*)malloc(sizeof(node));  //hrere we will creat an node if it is possible so we typecast  the add of struct created to variable
    if(newNodeAdd == NULL)
    {
        printf("space is not possible");
    }
    else  // so this will create a node and return that node 
    {
        newNodeAdd->data=val;
        newNodeAdd->next=NULL;
        return newNodeAdd;
    } 
}
void display()
{
    if(head==NULL)
    {
        printf("No LinkList");
    }
    else
    {
        node *temp = head;
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
node *traverse(int i)
{
    node *temp = head;
    for(int j=1;j<i;j++)
    {
        temp=temp->next;
    }
    return temp;
}
void insert_beg(int val)
{
    node *new = new_node(val);
    if (head==NULL)
    {
        head = new;
    }
    else
    {
        new->next=head;
        head=new;
    }
}
void insert_end(int  val)
{
    node*   newnode = new_node(val);
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        node *p=head;
        while(p->next != NULL)
        {
            p=p->next;
        }
        p->next = newnode;
    }

}
void insert_any(int pos, int value)
{
    node *new=new_node(value);
    node *temp = traverse(pos);
    new->next=temp->next;
    temp->next=new;


}
void delete_beg()
{
    node *p=head;
    if(head==NULL)
    {
        printf("\nNothing to Delete");
    }
    else
    {
        head=p->next;
        printf("\n%d  is deleted from the beginning",p->data);
        free(p);
    }
}
void  delete_end()
{
    node *p=head;
    if(head==NULL)
    {
        printf("\nNothing to Delete");
    }
    else
    {
        while(p->next->next!=NULL)
        {
            p=p->next;
        }
        node *temp = p->next;
        p->next=NULL;
        printf("\n%d is deleted from end \n",temp->data);
        free(temp);
    }
}
void del_at(int pos)
{
    node *temp=traverse(pos-1);
    if(temp == NULL )
        return;
    else
    {
        node *fr = temp->next;
        temp->next=temp->next->next;
        printf("\n%d is deleted from position %d\n",fr->data,pos);
        free(fr);
    }
}
void main()
{
    insert_end(20);
    insert_beg(10);
    insert_end(20);
    insert_beg(15);
    insert_end(30);
    display();
    insert_any(2,10);
    display();
    delete_beg();
    delete_end();
    display();
    del_at(3);
    display();
}