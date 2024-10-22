bool compare(struct ListNode * , struct ListNode * );
void insert(struct ListNode**,int );
struct ListNode* createnode(int );
bool isPalindrome(struct ListNode* head){//hhkfgkfjgkj
    struct ListNode * head1=NULL;
    struct ListNode * temp = head;
    while(temp!=NULL)
    {
        insert(&head1, temp->val);
        temp=temp->next;
    }
    bool f = compare(head1,head);
    return f;
}
struct ListNode* createnode(int val)
{
    struct ListNode * temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val=val;
    temp->next=NULL;
    return temp;
}
void insert(struct ListNode**head,int val)
{
    struct ListNode *temp = createnode(val);
    temp->next = *head;
    *head=temp;
}
bool compare(struct ListNode * head1, struct ListNode * head2)
{
    struct ListNode * temp1=head1;
    struct ListNode * temp2=head2;
    while(temp1!=NULL)
    {
        if(temp1->val!=temp2->val)
        {
            return false;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return true;
}