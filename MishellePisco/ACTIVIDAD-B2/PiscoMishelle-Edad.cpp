#include<iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int aa, ma, da, an, mn, dn, a, m, d;
	cout<<"Ingrese el año actual"<<endl;
	cin>>aa;
	cout<<"Ingrese el mes actual"<<endl;
	cin>>ma;
	cout<<"Ingrese el día actual"<<endl;
	cin>>da;
	cout<<"Ingrese el año de nacimiento"<<endl;
	cin>>an;
	cout<<"Ingrese el mes de nacimiento"<<endl;
	cin>>ma;
	cout<<"Ingrese el día de nacimiento"<<endl;
	cin>>dn;
	if(da>=dn)
		d = da-dn;
	else
		ma = ma-1;
		aa = da+30;
		a = m-dn; 
	if(ma>=mn)
		m = ma = mn;
	else
		aa = aa-1;
		ma = aa+12;
		m = ma-mn;
	a = aa-an;
	cout<<a, m, a;
	return 0;
}
