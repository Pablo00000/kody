/*
 * dodaj_liczby.cxx

 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float a;	//deklaracja zniennej calkowitgej
	float b;

	a = 0;	//inicjacja zminiennej
	b = 0;
	cout << "Podaj pierwszą liczbe: " << endl;
	cin >> a;
	cout << "Podaj drugą liczbe: " << endl;
	cin >> b;
	cout << a << " "<< b << endl;
	cout << "Suma: " << a + b;
	return 0;
}

