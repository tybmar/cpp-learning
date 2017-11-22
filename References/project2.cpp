//Implement the following functions
//void factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter

#include <iostream>

using namespace std;

void factorial(int a, int &result)
{
	for (size_t i = 1; i <= a; i++)
	{
		result *= i;
	}
	cout << "To: " << result << endl;

}

int main()
{
	int a = 0;

	cout << "Silnia liczby: ";
	cin >> a;

	int silnia = 1;
	int &result = silnia;

	factorial(a, result);


	system("PAUSE");
	return 0;
}
