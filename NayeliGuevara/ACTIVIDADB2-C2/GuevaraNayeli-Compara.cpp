//=========================================================
//==> Nombre del programa:Coompara de dos numeros
//==> Archivo:GuevaraNayeli-Compara.cpp
//==> Autora: Nayeli Guevara 
//==> Fecha de elaboracion: 2022-05-02
//==> Fecha de actualizacion: 2022-05-21
//=======================================
#include<iostream>
using namespace std;
int main()
{
	//Nayeli Guevara
	int ng_x,ng_y ;
	cout<<"Ingrese los numeros a comparar"<<endl;
	cin>>ng_x;
	cin>> ng_y;
	if (ng_x==ng_y)
	{
		cout<<"iguales"<<endl;
	}

	else if (ng_x>ng_y)
		{
			cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Coompara de dos numeros"<<endl;
cout<<"//==> Archivo : GuevaraNayeli-Compara.cpp"<<endl;
cout<<"//==>Autor: Nayeli Guevara"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-21"<<endl;
cout<<"//================================================="<<endl;

			cout<<ng_x<<"es mayor"<<endl;
		}
		else{
			cout<<ng_y<<"es mayor"<<endl;
		} 
	
	return 0;
}
