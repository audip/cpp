#include <iostream>
#include<stdio.h>

struct node
{
	int data;
	struct node *next;	
}*Start;

int main()
{
	char ch;
	do{
		struct node *new_node, *current_node;
		new_node = new node;

		printf("Enter an Integer:");
		scanf("%d", &new_node->data);
		new_node->next=NULL;

		if(Start==NULL)
		{
			Start=new_node;
			current_node=new_node;
		}
		else
		{
			current_node->next=new_node;
			current_node=new_node;
		}
		printf("\nWant to Continue(Y/N):");
		scanf("%s", &ch);
	}while(ch!='n');
}