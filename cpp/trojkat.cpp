/*
 * trojkat.cxx

 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "Podaj bok a: " << endl;
	cin >> a;
	cout << "Podaj bok b: " << endl;
	cin >> b;
	cout << "Podaj bok c: " << endl;
	cin >> c;
	//if (a < b + c) 
		//if (b < a + c ) 
			//if (c < a + b)
				//cout << "da się";
	//else
		//cout << "nie da się";
		//else
			//cout << "nie da się";
			//else
				//cout << "nie da się";
	
	if (a + b > c &&  a + c > b && c + b > b)
		cout << "da się";
	else cout << "nie da sie";
	return 0;
}

