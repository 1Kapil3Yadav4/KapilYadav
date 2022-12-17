/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 void Node(int r,struct ListNode **head,struct ListNode **last){
    struct ListNode *new = NULL;
    new = (struct ListNode*)malloc(sizeof(struct ListNode));
    new->next = NULL;
    new->val = r;

    if(*head == NULL)
    {
        *head = new;
        *last = new;
    }
    else
    {
        (*last)->next =new;
        *last = new;
    } 
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
struct ListNode *p=NULL,*l=NULL,*temp=NULL;
int sum=0,n=0;
while(l1 && l2){
    sum=l1->val+l2->val+n;
    n=sum/10;
    sum=sum%10;
    l1=l1->next;
    l2=l2->next;
    Node(sum,&p,&l);
}
temp = (l1==NULL? l2 : l1);
while(temp){
sum=temp->val+n;
    n=sum/10;
    sum=sum%10;
    temp=temp->next;
    Node(sum,&p,&l);
}
if(n){
    Node(n,&p,&l);
}
return (p);
}
