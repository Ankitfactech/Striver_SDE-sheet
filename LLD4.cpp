/*
// Code for reversing doubly linked list . 
struct Node
{
    int data;
    Node * next;
    Node * prev;
    Node (int x)
    {
        data=x;
        next=NULL;
        prev=NULL;
    }
        
};
*/
Node* reverseDLL(Node * head)
{
    //Your code here
    
    Node* p=head;
    Node*curr=head;
    while(p!=NULL)
    {
        p=p->next;
        curr->next=curr->prev;
        curr->prev=p;
        if(p!=NULL)
        curr=p;
    }
    return curr;
    
}