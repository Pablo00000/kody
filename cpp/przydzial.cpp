/*
 * przydzial.cpp

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a = 0;
	cout << "Podaj wynik" << endl;
	cin >> a;
	if (a < 20) cout << "Podstawowa" << endl;
	else if (20 <= a && a < 40 ) cout << "Średniozaawansowana" << endl;
	else if (a > 40) cout << "Zaawansowana" << endl;
	return 0;
}

