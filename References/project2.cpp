//Implement the following functions
//void Factorial(int value, int& result)

#include <iostream>

using namespace std;

void Factorial(int value , int& result)
{
	cout << "Silnia liczby: ";
	for (size_t i = 1; i <= value; i++)
	{
		result *= i;
	}
	cout << "To: " << result << endl;

}

int main()
{
	int a = 0;
	int silnia = 1;

	cout << "Podaj liczbe: ";
	cin >> a;
	Factorial(a, silnia);

	system("PAUSE");
	return 0;
}
