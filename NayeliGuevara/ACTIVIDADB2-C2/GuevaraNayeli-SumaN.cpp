//========================================================
//==> Nombre del programa: Suma de dos numeros
//==> Archivo:GuevaraNayeli-SumaN.cpp
//==> Autora: Nayeli Guevara
//==> Fecha de elaboracion: 2-05-2022
//==> Fecha de actualizacion: 2305-2022
//==========================================================

#include<iostream>
using namespace std;

int main()
{
  int ng_c=0,ng_n;
  float ng_x,ng_a=0;
  cout<<"Ingrese la cantidad de número a sumar:"; 
  cin>>ng_n;
  do{
	  cout<<"Ingrese el número : "; 
	  cin>>ng_x;
	  ng_c=ng_c+1;
	  ng_a=ng_a+ng_x;
  }while(ng_c<ng_n);

cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//==> Archivo : GuevaraNayeli-SumaN.cpp"<<endl;
cout<<"//==>Autor: Nayeli Guevara"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-23"<<endl;
cout<<"//================================================="<<endl;

cout <<"La suma de los"<<ng_n<<" numeros fue  "<<ng_a<<"endl;

return 0; 

}
