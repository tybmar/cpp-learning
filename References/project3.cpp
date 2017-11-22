//Implement the following functions
//void swap(int &a, int &b);            //Swap two numbers through reference arguments

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
	int temp = 0; //tymczasowa zmienna do podmiany
	temp = a;
	a = b;
	b = temp;

	cout << "Odwracamy liczby! " << a << " "<< b << endl;
}

int main()
{
	int x = 0;
	int y = 0;

	cout << "Podaj 1sza liczbe: \n";
	cin >> x;
	cout << "Podaj 2ga liczbe: \n";
	cin >> y;

	int &a = x;
	int &b = y;

	swap(a,b);

	system("PAUSE");
	return 0;
}
