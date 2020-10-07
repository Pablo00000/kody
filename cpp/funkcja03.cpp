/*
 * funkcja01.cpp
 * 
 * Copyright 2020  <>

 */


#include <iostream>

using namespace std;

int liczba1 = 0;
int liczba2 = 0;

void sumuj(int l1, int l2) {
	int suma = l1 + l2;
	cout << "Suma: " << suma << endl;
	}

int main(int argc, char **argv)
{
	int a, b;
	cout << "Podaj liczby: ";
	cin >> a;
	cin >> b;
	cout << "Suma: " << liczba1 + liczba2 << endl;
	
	sumuj (a,b);
	
	return 0;
}

