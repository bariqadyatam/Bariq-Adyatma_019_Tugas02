#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main ()
{
	float a, t, c, k;
	cout <<"masukkan alas segitiga siku-siku=";
	cin >> a;
	cout <<"masukkan tinggi segitiga siku-siku=";
	cin >> t;
	c= sqrt((a*a)+(t*t));
	k= a+t+c;
	cout <<"\nSisi miring Segitiga Siku-Siku="<<c<<endl;
	cout <<"Keliling Segitiga siku-siku="<<k<<endl;
	
	getch ();
	return 0;

}
