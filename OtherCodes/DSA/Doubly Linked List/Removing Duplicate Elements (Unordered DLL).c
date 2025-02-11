#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node * prev;
    int val;
    struct node * next;
};
struct node * createnode(int );
void insert(struct node **, struct node **, int);
void remdup(struct node **);
void print(struct node *);
int main()
{
    int n;
    scanf(" %d",&n);
    struct node * head = NULL;
    struct node * tail = NULL;
    for(int i=0;i<n;i++)
    {
        int val;
        scanf(" %d",&val);
        insert(&head,&tail,val);
    }
    if(n==2)
    {
        print(head);
    }
    else{
        remdup(&head);
        print(head);
    }
}
struct node * createnode(int val)
{
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->val=val;
    temp->next=NULL;
    temp->prev=NULL;
    return temp;
}
void insert(struct node ** head, struct node ** tail, int val)
{
    struct node * temp = createnode(val);
    if(*head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        *head=temp;
        *tail=temp;
    }
    else
    {
        temp->next=*head;
        temp->prev=*tail;
        (*tail)->next=temp;
        (*head)->prev=temp;
        *head=temp;
    }
}
void remdup(struct node ** head)
{
    struct node * temp= *head;  
    do{
        struct node * temp1 = temp->next;
        do
        {
            if(temp1->val==temp->val)
            {
                temp1->prev->next=temp1->next;
                temp1->next->prev=temp1->prev;
            }
            temp1=temp1->next;
        }while(temp1!=*head);
        temp=temp->next;
    }while(temp!=*head);
}
void print(struct node * head)
{
    struct node * temp = head;
    do{
        printf("%d ",temp->val);
        temp=temp->next;
    }while(temp!=head);
}