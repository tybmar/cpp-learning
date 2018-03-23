//Implement the following functions
//void swap(int &x, int &y);            //Swap two numbers through reference arguments

#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
	int temp = 0; //tymczasowa zmienna do podmiany
	temp = x;
	x = y;
	y = temp;

	cout << "Odwracamy liczby! " << x << " " << y << endl;
}

int main()
{
	int a = 0;
	int b = 0;

	cout << "Podaj 1sza liczbe: \n";
	cin >> a;
	cout << "Podaj 2ga liczbe: \n";
	cin >> b;

	swap(a, b);

	system("PAUSE");
	return 0;
}
