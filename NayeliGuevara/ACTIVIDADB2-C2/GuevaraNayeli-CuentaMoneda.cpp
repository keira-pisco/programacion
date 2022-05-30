//==============================================
//==> Nombre del programa: CuentaMoneda
//==> Archivo : GuevaraNayeli-CuentaMoneda.cpp
//==>Autor: Nayeli Guevara
//==>Fecha de elaboración: 2022-05-02
//==>Fecha ultima actualización: 2022-05-21
//================================================
#include<iostream>
using namespace std;
int main()
{
	int ng_n, ng_i=0, ng_i1=0, ng_i5=0;
	float ng_x, ng_s=0, ng_s1=0, ng_s5=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>ng_n;
	do
	{
	
	cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
	cin>>ng_x;
		ng_i=ng_i+1;
		ng_s=ng_s+ng_x;
		if(ng_x==ng_n)
		{
	        ng_i1= ng_i1+1;
	        ng_s1= ng_s1+ng_x;
		}
		else
		{
		ng_i5= ng_i5+1;
		ng_s5= ng_s5+ng_x;
		}
   }
	while(ng_i<ng_n);

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: CuentaModena"<<endl;
cout<<"//==> Archivo : GuevaraNayeli-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Nayeli Guevara"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-21"<<endl;
cout<<"//================================================="<<endl;

	cout<<"Resultado es:"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<ng_i<<endl;
	cout<<"Cantidad total de dinero contado: "<<ng_s<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas:"<<ng_i1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ng_s1<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas:"<<ng_i5<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ng_s5<<endl;
	
return 0;

}
