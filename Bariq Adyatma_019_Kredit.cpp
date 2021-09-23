#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main ()
{
	long int a, b, c, d, e, f, g;
	
	cout<<"Program Untuk Dealer"<<endl;
	cout<<"\n";
	
	cout<<"Masukkan Harga Asli Motor="; cin>>a;
	cout<<"Masukkan Berapa Lama Kreditnya(bulan)="; cin>>b;
	
	c=a/b;
	d=c*0.1;
	e=c+d;
	f=e*b;
	g=f-a;
	
	
	cout<<"\nCicilan="<<e<<endl;
	cout<<"Total Harga Cicilan="<<f<<endl;
	cout<<"Keuntungan="<<g<<endl;
	
	getch ();
	return 0;
}
