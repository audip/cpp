#include <iostream>

using namespace std;

int lsearch(int ar[], int item)
{
	register unsigned int loop_var;
	for(loop_var=0;loop_var<5;++loop_var)
	{
		if(ar[loop_var]==item)
		{
			return loop_var;
		}
	}
	return -1;
}

int main()
{
	int ar[5], item, found;
	register unsigned int loop_var;
	cout<<"Enter Array Values:";
	for(loop_var=0;loop_var<5;++loop_var)
	{
		cout<<"Enter Value "<<loop_var+1<<":";
		cin>>ar[loop_var];
	}
	cout<<"Enter Item to be searched:";
	cin>>item;
	found=lsearch(ar, item);
	if(found>-1)
	{
		cout<<"Item found at :"<<found+1;
	}
	else
	{
		cout<<"Item not found in the array";
	}
	return 1;
}
