//Implement the following functions using pointer arguments only
//void swap(int *ptr1, int *ptr2);  //Swap the value of two integers

#include <iostream>
using namespace std;

void swap(int *ptr1, int *ptr2)
{
	int temp = 0; //tymczasowa zmienna do podmiany
	temp=*ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;

	cout << "Odwracamy liczby! " << *ptr1<< " "<<*ptr2 << endl;
}

int main()
{
	int a = 0;
	int b = 0;

	cout << "Podaj 1sza liczbe: \n";
	cin >> a;
	cout << "Podaj 2ga liczbe: \n";
	cin >> b;

	int *ptr1 = &a;
	int *ptr2 = &b;
	
	swap(ptr1,ptr2);


	system("PAUSE");
	return 0;
}
