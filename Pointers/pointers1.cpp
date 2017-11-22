//Implement the following functions using pointer arguments only
//int Add(int *a, int *b);    //Add two numbers and return the sum
#include <iostream>

using namespace std;

int Add(int *ptr1, int *ptr2)
{
	return *ptr1+*ptr2;
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

	cout << "Wynik dodawania to: "<<Add(ptr1,ptr2) << endl;

	system("PAUSE");
	return 0;
}
