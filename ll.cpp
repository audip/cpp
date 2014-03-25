#include <iostream>
#include<stdio.h>

using namespace std;

struct node
{
	int data;
	struct node *next;	
}*Start;

void createnode()
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
void show()
{
	struct node *ptr;
	ptr=Start;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"-->";
		ptr=ptr->next;
	}
}
int main()
{
	createnode();
	show();
	return 0;
}