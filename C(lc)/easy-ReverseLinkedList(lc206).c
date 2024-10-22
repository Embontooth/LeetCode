struct ListNode * createnode(int val);
void insert(struct ListNode ** head, int val);
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode * head1 = NULL;
    struct ListNode * temp = head;
    while(temp!=NULL)
    {
        insert(&head1,temp->val);
        temp=temp->next;
    }
    return head1;
}
struct ListNode * createnode(int val)
{
    struct ListNode * temp = (struct ListNode *)malloc(sizeof(struct ListNode));
    temp->val=val;
    temp->next=NULL;
    return temp;
}
void insert(struct ListNode ** head, int val)
{
    struct ListNode * temp = createnode(val);
    temp->next=*head;
    *head=temp;
}