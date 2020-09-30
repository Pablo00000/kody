/*
 * petle_cw3.cpp
 * 
 *  Napisz program "petle_cw3.cpp", który wyświetla kwadraty
 *  kolejnych liczb naturalnych, począwszy od zera a skończywszy
 *  na kwadracie liczby podanej przez użytkownika.
 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int n = 0;
	
	{
		cout << "Podaj liczbę liczb n = ";
		cin >> n;
	} while (n <= 0);
	for (int k = 1; k <= n; k++)
	cout << k*k << endl;
	
	return 0;
}

