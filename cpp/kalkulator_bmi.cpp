/*
 * kalkulator_bmi.cpp

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	float a = 0;
	float b = 0;
	float c = (b / (a * a));
	cout << "Podaj wzrost";
	cin >> a;
	cout << "Podaj wagę";
	cin >> b;
	
	if (c < 18.5) 
		cout << "niedowaga";
	else if (c <= 25 && c >= 18.5)
		cout << "Norma";
	else if (c <= 25 && c < 30)
		cout << "Nadwaga";
	else if (c >= 30 && c <= 50)
		cout << "Otyłość";
	return 0;
}

