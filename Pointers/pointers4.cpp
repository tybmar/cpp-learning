//Implement the following functions using pointer arguments only
//void factorial(int *ptr1, int *result);       //Generate the factorial of a number and return that through the second pointer argument

#include <iostream>

using namespace std;

void factorial(int *ptr1, int *result)
{
	for (size_t i = 1; i <=*ptr1 ; i++)
	{
		*result *= i;
	}
	cout << "To: " << *result << endl;

}

int main()
{
	int a = 0;

	cout << "Silnia liczby: ";
	cin >> a;

	int *ptr1 = &a;
	int silnia = 1;
	int *result = &silnia;

	factorial(ptr1, result);


	system("PAUSE");
	return 0;
}
