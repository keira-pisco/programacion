//=========================================================
//==> Nombre del programa:Punto Venta
//==> Archivo:GuevaraNayeli-PuntoVenta.cpp
//==> Autora: Nayeli Guevara
//==> Fecha de elaboracion: 2-05-2022
//==> Fecha de actualizacion: 21-05-2022
//======================================================

#include<iostream>
using namespace std;
int main()
{
	float ng_x, ng_c, ng_a, ng_n, ng_vb, ng_viva, ng_vdes, ng_vfi, ng_vft;
	ng_c = 0;
	ng_a = 0;
	
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin>>ng_n;
	
	do
	{
		cout<<"Ingrese el valor del producto:  ";   cin>> ng_x;
		ng_c = ng_c+1;
		ng_a = ng_a+ng_x;
	}
	while(ng_c<ng_n);
	ng_vb = ng_a;
	ng_viva = ng_vb*0.12;
	ng_vdes = ng_vb*0.10;
	ng_vfi = ng_vb+ng_viva;
	ng_vft = ng_vfi-ng_vdes;
//
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Punto Venta"<<endl;
cout<<"//==> Archivo : GuevaraNayeli-PuntoVenta.cpp"<<endl;
cout<<"//==>Autor: Naueli Guevara"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-21"<<endl;
cout<<"//================================================="<<endl;


	cout<<"Valor con iva es: "<<ng_vfi<<endl;
	cout<<"Valor final es: "<<ng_vft;

	return 0; 
}

