//Implement the following functions using pointer arguments only
//void AddVal(int *ptr1, int *ptr2, int *result); //Add two numbers and return the sum through the third pointer argument
#include <iostream>

using namespace std;

void addVal(int *ptr1, int *ptr2, int *result)
{
	*result = *ptr1 + *ptr2;
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
	int result = *ptr1 + *ptr2;

	cout << "Wynik dodawania to: "<<result<< endl;

	system("PAUSE");
	return 0;
}
