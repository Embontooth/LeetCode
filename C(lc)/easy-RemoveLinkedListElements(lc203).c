struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode * temp = head;
    if(temp==NULL)
    {
        return head;
    }
    while(temp->next!=NULL)
    {
        if(temp->next->val==val)
        {
            temp->next=temp->next->next;
        }
        else
        {
            temp=temp->next;
        }
    }
    if(head->val==val)
    {
        head=head->next;
    }
    return head;
}