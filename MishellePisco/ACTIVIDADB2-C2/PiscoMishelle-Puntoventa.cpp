 // ================================================
// ==> Nombre del programa: Puntoventa
// ==> Archivo : PiscoMishelle-Puntoventa.cpp
// ==>Autor: Mishelle Pisco
// ==>Fecha de elaboración: 2022-04-19
// ==>Fecha última actualización: 2022-05-20
// ================================================ 
#include<iostream>
using namespace std;
int main()
{
	float gp_x, gp_c, gp_a, gp_n, gp_vb, gp_viva, gp_vdes, gp_vfi, gp_vft;
	gp_c = 0;
	gp_a = 0;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> gp_n;
	
	do
	{
		cout<<"Ingrese el valor del producto " <<gp_c+1 <<": " ;   cin>> gp_x;
		gp_c = gp_c+1;
		gp_a = gp_a+gp_x;
	}
	while(c<n);
	gp_vb = gp_a;
	gp_viva = gp_vb*0.12;
	gp_vdes = gp_vb*0.10;
	gp_vfi = gp_vb+gp_viva;
	gp_vft = gp_vfi-vdes;
	cout<<"Valor con iva es: "<<gp_vfi<<endl;
	cout<<"Valor final es: "<<gp_vft;
	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Puntoventa"<<endl;
cout<<"//==> Archivo : PiscoMishelle-Puntoventa.cpp"<<endl;
cout<<"//==>Autor: Mishelle Pisco"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-19"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;
}
