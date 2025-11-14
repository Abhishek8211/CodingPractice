void createNode(Node** head, int val){..2
    Node* new_node = new Node();
    new_node -> data = val;
    new_node -> next = NULL;

    if(*head == NULL){
        *head = new_node;
        return;
    }

    Node* temp = *head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = new_node;
}