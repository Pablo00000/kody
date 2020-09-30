/*
 * najwieksze.cxx

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj liczbe: " << endl;
	cin >> a;
	cout << "Podaj liczbe: " << endl;
	cin >> b;
	cout << "Podaj liczbe: " << endl;
	cin >> c;
	
	if (a > b && a > c) cout << a;
	else if (b > a && b > c) cout << b;
	else cout << c;
	return 0;
}

