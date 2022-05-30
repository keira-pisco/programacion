// ================================================
// ==> Nombre del programa: CuentaMoneda
// ==> Archivo : PiscoMishelle-CuentaMoneda.cpp
// ==>Autor: Mishelle Pisco
// ==>Fecha de elaboración: 2022-04-19
// ==>Fecha última actualización: 2022-05-20
// ================================================ =
#include<iostream>
using namespace std;
int main()
{
	int gp_n, gp_c, gp_c1, gp_c2, gp_cl, gp_cz;
	float gp_x, gp_al, gp_a, gp_a1, gp_a2, gp_az;
	gp_c = 0;
	gp_c1 = 0;
	gp_c2 = 0;
	gp_a = 0;
	gp_a1 = 0;
	gp_a2 = 0;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>gp_n;
	do
	{
	
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>gp_x;
		gp_c = gp_c+1;
		gp_a = gp_a+mp_x;
		if(gp_x==0.25)
		{
			gp_c1 = gp_c1+1;
			gp_a1 = gp_x+gp_a1;
		}
		else
			{
				gp_c2 = gp_c2+1;
				gp_a2 = gp_a2+gp_x;
			}
   }
	while(gp_c<gp_n);
	cout<<"Cantidad de monedas ingresadas: "<<gp_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<gp_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<gp_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<gp_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<gp_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<gp_a1<<endl;
	
cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: CuentaMoneda"<<endl;
cout<<"//==> Archivo : PiscoMishelle-CuentaMoneda.cpp"<<endl;
cout<<"//==>Autor: Mishelle Písco"<<endl;
cout<<"//==>Fecha de elaboración: 2022-04-19"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl;
cout<<"//================================================="<<endl;

  return 0;
}
