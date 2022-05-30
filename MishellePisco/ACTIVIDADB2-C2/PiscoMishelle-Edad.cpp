// ================================================
// ==> Nombre del programa: Edad
// ==> Archivo : PiscoMishelle-Edad.cpp
// ==>Autor: Mishelle Pisco
// ==>Fecha de elaboración: 2022-04-19
// ==>Fecha última actualización: 2022-05-20
// ================================================ =
#include<iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	intgmp_aa, gp_ma, gp_da, gp_an, gp_mn, gp_dn, gp_a, gp_m, gp_d;
	cout<<"Ingrese el año actual"<<endl;
	cin>>gp_aa;
	cout<<"Ingrese el mes actual"<<endl;
	cin>>gp_ma;
	cout<<"Ingrese el día actual"<<endl;
	cin>>gp_da;
	cout<<"Ingrese el año de nacimiento"<<endl;
	cin>>gp_an;
	cout<<"Ingrese el mes de nacimiento"<<endl;
	cin>>gp_ma;
	cout<<"Ingrese el día de nacimiento"<<endl;
	cin>>gp_dn;
	if(gp_da>=gp_dn){
		gp_d = gp_da-gp_dn;}
	else  {
		gp_ma = gp_ma-1;
		gp_aa = gp_da+30;
		gp_a = gp_m-gp_dn;
} 
	if (gp_ma>=gp_mn) {
		gp_m = gp_ma = gp_mn;
		}
	else   {
		gp_aa = gp_aa-1;
		gp_ma = gp_aa+12;
		gp_m = gp_ma-gp_mn;
	gp_a = gp_aa-gp_an;
	cout<<gp_a, gp_m, gp_a;
	}
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Edad"<<endl;
cout<<"//==> Archivo : PiscoMishelle-Edad.cpp"<<endl;
cout<<"//==>Autor: Mishelle Pisco"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-19"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  return 0;
  }
