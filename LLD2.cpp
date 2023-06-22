//Code for insertion of node in doubly linked list . 

void addNode(Node *head, int pos, int data)
{
   // Your code here
  int count=0;
  Node* temp =  head;
  Node* T= new Node( data);
  T->data = data;
  if(pos==-1){
      T->next=head->next;
      T->prev==NULL;
      T = head;
  }
else{
  while(count<pos){
      temp = temp->next;
      count++;
  }

  T->prev = temp;
  T->next = temp->next;
  temp->next =T;
}