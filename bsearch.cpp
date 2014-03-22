#include <iostream>

using namespace std;

int bsearch(int ar[], int item)
{
	register unsigned int loop_var;
	static int counter=0;
	int beg, mid, end;
	for(loop_var=0;ar[loop_var];++loop_var);
	beg=0, end=loop_var;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		cout<<"Pass"<<++counter;
		if(ar[mid]==item)
		{
			return mid;
		}
		else if(ar[mid] < item)
		{
			beg = mid+1;
		}
		else if(ar[mid] > item)
		{
			end = mid-1;
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
	found=bsearch(ar, item);
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