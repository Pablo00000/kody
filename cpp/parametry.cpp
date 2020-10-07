/*
 * parametry.cpp
 * 
 * Copyright 2020  <>

 */


#include <iostream>
using namespace std;

void zwieksz(int a) {
	a+= 2; //zwiekszenie wartości o 2
	cout << a << endl;
}

void zwieksz2(int &a) {
	a+= 2; //zwiekszenie wartości o 2
	cout << a << endl;
}

void zwieksz3(int b[]) { //przekazanie parametru przez referencje
	b[0] = b[0] + 2;
	cout << b[0] << endl;
	
	}

int main(int argc, char **argv)
{
	int a = 5;
	cout << a << endl;
	zwieksz(a);
	cout << a << endl;
	
	zwieksz2(a);
	cout << a << endl;
	
	int b[1] = {5}; //deklaracja i inicjacja jedno elementoweej tablicy
	cout << b[0] << endl;
	zwieksz3(b);
	cout << b[0] << endl;
	
	cout << b << endl;
	
	return 0;
}

