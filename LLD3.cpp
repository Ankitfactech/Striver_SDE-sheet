//code for deletion 

Node *deleteHead(Node * head)
{
   //Your code here
   if(head == NULL)
        return NULL;
    
    if(head->next == NULL) {
        delete(head);
        return NULL;
    }
        
   Node *temp = head;
   head = head->next;
   head->prev = NULL;
   delete(temp);
   
   return head;
}

class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      if(x == 1) {
          return deleteHead(head_ref);
      }
      
      Node *curr = head_ref;
      
      for(int i = 1; i < x - 1; i++) {
          curr = curr->next;
      }
      
      Node *temp = curr->next;
      if(curr->next->next != NULL) {
          curr->next = curr->next->next;
          curr->next->prev = curr;
      } 
      else
        curr->next = NULL;
      
      delete(temp);
      return head_ref;
    }

};