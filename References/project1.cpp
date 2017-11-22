//Implement the following functions
//void add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter


#include <iostream>

using namespace std;

void add(int a, int b, int &result)
{
	cout << "Wynik dodawania to: " << result<< endl;
}

int main()
{
	int a = 0;
	int b = 0;

	cout << "Podaj 1sza liczbe: \n";
	cin >> a;
	cout << "Podaj 2ga liczbe: \n";
	cin >> b;

	int wynik = a + b;
	int &result = wynik;

	add(a, b, result);

	system("PAUSE");
	return 0;
}
