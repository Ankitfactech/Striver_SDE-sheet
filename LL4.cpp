// Code to find length of linked list . 

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        int count =1;
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
            count++;
        }
        return count;
    
    }
};