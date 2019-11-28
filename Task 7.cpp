#include<iostream>
using namespace std;
#include <stdio.h>
#include<conio.h>
void swap(int*, int*); //Swap function declaration

int main()
{
   
   int x, y;

   cout<<"Enter the value of x and y\n";
   cin>>x>>y;

   cout<<"Before Swapping\nx = "<<x<<"\ny = "<<y<<endl;

   swap(&x, &y);

   cout<<"After Swapping\nx = "<<x<<"\ny = "<< y<<endl;

   return 0;
}
//Swap function definition
void swap(int *a, int *b)
{
   int t;

   t  = *b;
   *b = *a;
   *a = t;
}
