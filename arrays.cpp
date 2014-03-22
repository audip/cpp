#include <iostream>

using namespace std;

unsigned int ar[50], N=5;;

int insert(int item, int pos);
int del(int pos);
void show();
void input();

int main()
{
	int choice;
	char ch;
	do{
		cout<<"--Array Operations Menu--";
		cout<<"\n1. Input Elements";
		cout<<"\n2. Show Array Elemts";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:  input();
					 break;
			case 2:  show();
					 break;
			default: cout<<"Invalid Choice!! Try Again!!";
					 break;
		}
		cout<<"\nWant to Continue(Y/N):";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
}
void input()
{
	unsigned register int loop_var;
	cout<<"How many integers you want to enter?:";
	cin>>N;
	for(loop_var=0;loop_var<N;++loop_var)
	{
		cout<<"Enter variable "<<loop_var+1<<":";
		cin>>ar[loop_var]; 
	}
}
void show()
{
	unsigned register int loop_var;
	cout<<"\nArray Elements are:\n";
	for(loop_var=0;loop_var<N;++loop_var)
	{
		cout<<ar[loop_var]<<" ";
	}
}