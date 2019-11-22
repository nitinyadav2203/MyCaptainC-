#include<conio.h>

#include<iostream.h>

int main()
{   clrscr();
	float a[100],n,sum=0;
	cout<<"\n\t Enter number of elements to calculated: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"The Sum of entered elements is : ";
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
return 0;
	
}
