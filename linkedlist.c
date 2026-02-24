#include<stdio.h>
#include<stdlib.h>

struct node {
	
	int data;
	struct node *next;
};


struct node* insert_end(struct node *head, int data_t)
{
	
	 struct node *new = (struct node *)malloc(sizeof(struct node));
	
        new->data = data_t;
        new->next = NULL;

        if(head == NULL)
        {
                head = new;
		return head;
        }

	if(head->next == NULL)
	{
		head->next = new;
		return head;
	}
	
	struct node *temp = head;
	
	while(temp->next != NULL)
	{
		temp = temp->next;	
	}
	
	temp->next = new;
	return head;
}	


void  display(struct node *head)
{
	if(head == NULL)
	{
		printf("List is empty!!\n");
		
	}
		
	struct node *temp = head;
	
	while(temp != NULL)
	{
		printf("%d->", temp->data);
		temp = temp->next;
	}
	printf("\n");	
	
}


struct node* delete_middle(struct node *head)
{
	if(head == NULL)
	{
		printf("List is empty!!\n");
		return NULL;
	}
	
	struct node *fast = head;
	struct node *slow = head;
	struct node *prev = NULL;
	
	while(fast->next != NULL)		// trqaverse till the middle node.
						// the middle node is slow.
	{
		fast = fast->next->next;
		prev = slow;
		slow = slow->next;

	}
	
	// remove(free) current slow node
	
	prev->next = slow->next;
	free(slow);
	return  head;
}

int main()
{
	
	struct node *head = NULL;
	
	int sw, dt;
	do{	
	
	printf("Choose: \n1.Insert at END\n2.display\n3.delete middle node\n4.exit\n___>");
	
	scanf("%d", &sw);

	switch(sw)
	{	
		case 1:
			
			printf("Enter the data: ");
				
			scanf("%d", &dt);
			
			head = insert_end(head, dt);
				
			printf("The Node is Successfully Inserted at Last\n");
			
			break;
		case 2:
			display(head);
			break;
		case 3:
			head = delete_middle(head);
			
			printf("The middle Node is successfully Deleted!\n");
			
			break;
		case 4:
			exit(0);
			
	}


	}while(1);


}
