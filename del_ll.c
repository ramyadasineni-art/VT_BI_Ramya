#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
typedef struct student{
	int data;
	struct student *next;
}stu;
stu *add(stu *head)
{
	stu *newnode,*ptr;
	newnode=calloc(1,sizeof(stu));
	printf("enter data:\n");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=newnode;
	}
/*	if(newnode==NULL)
	{
		printf("node not created\n");
		return 0;
	}*/
	else{
	for(ptr=head;ptr->next;ptr=ptr->next);
	ptr->next=newnode;
	}
	return head;
}
stu *delete(stu *head)
{
	stu *temp=head;
	stu *slow=temp,*fast=temp,*slow1=temp;
	while(fast!=NULL && fast->next!=NULL)
	{
		slow1=slow;
		slow=slow->next;
		fast=fast->next->next;
	}
	slow1->next=slow->next;
	free(slow);
	return head;
}
void print(stu *head)
{
	stu *temp=head;
	for(temp;temp!=NULL;temp=temp->next)
	{
		printf("%d\n",temp->data);
	}
}

int main()
{
	stu *head=NULL;
	char choice;
	while(1){
	printf("1.add 2.delete 3.print 4.exit\n");
	printf("enter your choice:");
	__fpurge(stdin);
	scanf("%c",&choice);
//	__fpurge(stdin);
	switch(choice){
		case '1':head=add(head);
		         break;
	        case '2':head=delete(head);
			 break;
		case '3':print(head);
		         break;
	        case '4':exit(0);
	          	 break;
		}}
}

