/*
 * funkcja01.cpp
 * 
 * Copyright 2020  <>

 */


#include <iostream>

using namespace std;

void sumuj(int l1, int l2) {
	int suma = l1 + l2;
	cout << "Suma: " << suma << endl;
	}

void odejmij(int o1, int o2) {
	int roznica = o1 - o2;
	cout << "Różnica: " << roznica << endl;
	}

int pomnoz(int l1, int l2) {
	int iloczyn = l1 * l2;
	return iloczyn;
	}

int main(int argc, char **argv)
{
	int a, b;
	cout << "Podaj liczby: ";
	cin >> a;
	cin >> b;
	
	//sumuj (a, b);
	//odejmij (a, b);
	
	pomnoz(a, b);
	cout << "Iloczyn: " << a * b << endl;
	return 0;
}

