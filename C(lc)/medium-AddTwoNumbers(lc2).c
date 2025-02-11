struct ListNode * createnode(int );
void insert(struct ListNode ** , struct ListNode ** ,int );
void add(struct ListNode *, struct ListNode * , struct ListNode ** ,struct ListNode ** );
struct ListNode* addTwoNumbers(struct ListNode* , struct ListNode* );
void printList(struct ListNode* );
void check(struct ListNode ** );
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* head1=l1;
    struct ListNode* head2=l2;
    struct ListNode * head=NULL;
    struct ListNode * tail=NULL;
    add(head1,head2,&head,&tail);
    check(&head);
    return head;
}
void check(struct ListNode ** head)
{
    struct ListNode * temp = *head;
    while(temp!=NULL)
    {
        if((temp->val)>=10)
        {
            temp->val=temp->val-10;
            if(temp->next==NULL)
            {
                temp->next = createnode(1);
            }
            else
            {
                temp->next->val=temp->next->val+1;
            }
        }
        temp=temp->next;
    }
}
struct ListNode * createnode(int val)
{
    struct ListNode * temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->val=val;
    temp->next=NULL;
    return temp;
}
void insert(struct ListNode ** head, struct ListNode ** tail,int val)
{
    struct ListNode * temp = createnode(val);
    if(*head==NULL)
    {
        *head=temp;
        *tail=temp;
    }
    else
    {
        (*tail)->next=temp;
        *tail=temp;
    }
}
void add(struct ListNode *head1, struct ListNode * head2, struct ListNode ** head,struct ListNode ** tail)
{
    struct ListNode * temp1=head1;
    struct ListNode * temp2=head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        insert(head,tail,(temp1->val+temp2->val));
        temp1=temp1->next;
        temp2=temp2->next;
    }
    while(temp1!=NULL)
    {
        insert(head,tail,temp1->val);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        insert(head,tail,temp2->val);
        temp2=temp2->next;
    }
}
void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}