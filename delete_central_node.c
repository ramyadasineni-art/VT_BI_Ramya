#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* link;
} slist;


void add_node(slist** head, int data);
void delete_node(slist** head);
void print_list(slist* head);

int main()
{
    slist* head = NULL;
    int choice, data;
while(1)
{
    printf("1. Add node at last\n 2.Delete middle node\n 3.print list\n 4. exit\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            add_node(&head, data);
            break;

        case 2:
            delete_node(&head);
            break;

        case 3:
            print_list(head);
            break;
   
	case 4:
	   exit(0);
	default :
	  printf("choose correct option"); 
    }
}

    return 0;
}

void add_node(slist** head, int data)
{
    slist* new = malloc(sizeof(slist));

    if(new == NULL)
    {
        printf("Memory failed\n");
        return;
    }

    new->data = data;
    new->link = NULL;

    if(*head == NULL)
    {
        *head = new;
    }
    else
    {
        slist* temp = *head;
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = new;
    }
}

void delete_node(slist** head)
{
    if(*head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if((*head)->link == NULL)
    {
        free(*head);
        *head = NULL;
        return;
    }

    slist* slow = *head;
    slist* fast = *head;
    slist* prev = NULL;
//finding middle element
    while(fast != NULL && fast->link != NULL)
    {
        fast = fast->link->link;
        prev = slow;
        slow = slow->link;
    }

    prev->link = slow->link;
    free(slow);

    printf("central node deleted\n");
}

void print_list(slist* head)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    while(head != NULL)
    {
        printf("%d ", head->data);
        head = head->link;
    }
}
