#include <iostream>

#define UPPER 50

using namespace std;

unsigned int ar[UPPER], N=5;

void ins(int item, int pos);
void del(int item);
void show();
void input();
void bubblesort();

int main()
{
	int choice, item, pos;
	char ch;
	do{
		cout<<"--Array Operations Menu--";
		cout<<"\n1. Input Elements";
		cout<<"\n2. Show Array Elements";
		cout<<"\n3. Insert an Element";
		cout<<"\n4. Delete an Element";
		cout<<"\n5. Sort using Bubbles";
		cout<<"\n6. Sort using Selection Sort";
		cout<<"\nEnter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:  input();
					 break;
			case 2:  show();
					 break;
			case 3:  cout<<"\nEnter item to insert:";
					 cin>>item;
					 cout<<"\nEnter position to be inserted at:";
					 cin>>pos;
					 ins(item, pos);
					 break;
			case 4:	 show();
					 cout<<"Enter item to delete:";
					 cin>>item;
					 del(item);
					 break;
			case 5:  bubblesort();
					 break;
			case 6:  break;
			default: cout<<"\nInvalid Choice!! Try Again!!";
					 break;
		}
		cout<<"\nWant to Continue(Y/N):";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
}
void input()
{
	unsigned register int loop_var;
	cout<<"\nHow many integers you want to enter?:";
	cin>>N;
	for(loop_var=0;loop_var<N;++loop_var)
	{
		cout<<"\nEnter variable "<<loop_var+1<<":";
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
void ins(int item, int pos)
{
	unsigned register int loop_var;
	for (loop_var=++N ; loop_var > pos; --loop_var)
	{
		ar[loop_var]=ar[loop_var-1];
	}
	ar[pos]=item;
}

void del(int item)
{
	unsigned register int loop_var;
	for(loop_var=0;loop_var<N && ar[loop_var]!=item;++loop_var);
	for(;loop_var<N;++loop_var)
	{
		ar[loop_var]=ar[loop_var+1];
	}
	--N;
}
void bubblesort()
{
	unsigned register int loop_var1, loop_var2;
	int temp;
	for(loop_var1=0; loop_var1<N; ++loop_var1)
	{
		for(loop_var2=0; loop_var2<N-1-loop_var1; ++loop_var2)
		{
			if(ar[loop_var2]<ar[loop_var1])
			{
				temp=ar[loop_var1];
				ar[loop_var1]=ar[loop_var2];
				ar[loop_var2]=temp;
			}
		}
	}
}