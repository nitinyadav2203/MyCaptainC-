#include<conio.h>
#include<iostream.h>

int main()
{
    clrscr();
	int year;
 
    cout << "Enter the year in yyyy format : ";
    cin >> year;
    if (year % 4 == 0)
        cout << year << " is a leap year";
    else
        cout << year << " is not a leap year";
   return 0;
}
