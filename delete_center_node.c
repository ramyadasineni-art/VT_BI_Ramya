
#include<stdio.h>
#include<stdlib.h>

#define SUCCESS 0
#define FAILURE -1

typedef struct node
{
    int data;
    struct node *link;
} sll;

/* Insert at Last */
int insert_last(sll **head, int data)
{
    sll *new = malloc(sizeof(sll));
    if(new == NULL)
        return FAILURE;

    new->data = data;
    new->link = NULL;

    if(*head == NULL)
    {
        *head = new;
        return SUCCESS;
    }

    sll *temp = *head;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }

    temp->link = new;
    return SUCCESS;
}

/* Delete Center Node */
int delete_center(sll **head)
{
    if(*head == NULL)
        return FAILURE;

    if((*head)->link == NULL)  // only one node
    {
        free(*head);
        *head = NULL;
        return SUCCESS;
    }

    sll *slow = *head;
    sll *fast = *head;
    sll *prev = NULL;

    while(fast != NULL && fast->link != NULL)
    {
        fast = fast->link->link;
        prev = slow;
        slow = slow->link;
    }

    prev->link = slow->link;
    free(slow);

    return SUCCESS;
}

/* Print List */
void print_list(sll *head)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->link;
    }
    printf("NULL\n");
}

int main()
{
    sll *head = NULL;
    int data, choice;

    while(1)
    {
        printf("\n1. Insert Last\n2. Delete Center Node\n3. Print List\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                if(insert_last(&head, data) == FAILURE)
                    printf("Insertion failed\n");
                else
                    printf("Inserted successfully\n");
                break;

            case 2:
                if(delete_center(&head) == FAILURE)
                    printf("Delete failed\n");
                else
                    printf("Center node deleted successfully\n");
                break;

            case 3:
                print_list(head);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}

