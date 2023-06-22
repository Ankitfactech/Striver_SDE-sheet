Node *head = new Node(arr[0]);
        Node *prev = head;
        
        for(int i=1;i<arr.size();i++){
            
            Node *curr = new Node(arr[i]);

            prev->next = curr;
            prev = curr;
        }
        
        return head;
    }