//Implement the following functions
//void add(int &a,int &b);  


#include <iostream>

using namespace std;

void Add(int &a, int &b)
{
	int sum = a + b;
	cout << "Wynik dodawania to: " << sum << endl;
}

int main()
{
	int a = 0;
	int b = 0;
	int result = 0;

	cout << "Podaj 1sza liczbe: \n";
	cin >> a;
	cout << "Podaj 2ga liczbe: \n";
	cin >> b;

	Add(a, b);

	system("pause");
	return 0;
}
