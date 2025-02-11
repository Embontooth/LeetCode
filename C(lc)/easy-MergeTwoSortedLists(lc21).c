struct ListNode * createnode(int);
void insert(struct ListNode **, struct ListNode **, int);
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode * temp1 = list1;
    struct ListNode * temp2 = list2;
    struct ListNode * head = NULL;
    struct ListNode * tail = NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->val<=temp2->val)
        {
            insert(&head,&tail,temp1->val);
            temp1=temp1->next;
        }
        else
        {
            insert(&head,&tail,temp2->val);
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL)
    {
        insert(&head,&tail,temp1->val);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        insert(&head,&tail,temp2->val);
        temp2=temp2->next;
    }
    return head;
}
struct ListNode * createnode(int val)
{
    struct ListNode * temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->val=val;
    temp->next=NULL;
    return temp;
}
void insert(struct ListNode ** head, struct ListNode ** tail, int val)
{
    struct ListNode * temp = createnode(val);
    if(*head==NULL){
        *head=temp;
        *tail=temp;
    }
    else{
        (*tail)->next=temp;
        *tail=temp;
    }
}