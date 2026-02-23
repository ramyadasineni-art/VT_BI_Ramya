#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

// insert node at end
struct Node* insertEnd(struct Node* head, int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) 
    {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

//  delete middle node
struct Node* deleteMiddle(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty\n");
        return NULL;
    }

    if (head->next == NULL) 
    {
        free(head);
        return NULL;
    }

    struct Node *slow = head, *fast = head, *prev = NULL;

    while (fast != NULL && fast->next != NULL) 
    {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }

    // Delete middle node
    prev->next = slow->next;
    free(slow);

    return head;
}


void display(struct Node* head) 
{
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
   
}

int main() {
    struct Node* head = NULL;
    int n, value;

    printf("Enter no of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &value);
        head = insertEnd(head, value);
    }

    printf("\nbefore deletion:\n");
    display(head);

    head = deleteMiddle(head);

    printf("\nAfter Deleting Middle Node:\n");
    display(head);

    return 0;
}






