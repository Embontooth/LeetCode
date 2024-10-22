struct ListNode* insertionSortList(struct ListNode* head) {
    struct ListNode * temp1 = head;
    int n=1;
    if(temp1==NULL)
    {
        return head;
    }
    while(temp1!=NULL)
    {
        struct ListNode * temp = head;
        while(temp->next!=NULL)
        {
            if(temp->val>temp->next->val)
            {
                int t = temp->val;
                temp->val=temp->next->val;
                temp->next->val=t;
            }
            temp=temp->next;
        }
        temp1=temp1->next;
    }
    return head;
}