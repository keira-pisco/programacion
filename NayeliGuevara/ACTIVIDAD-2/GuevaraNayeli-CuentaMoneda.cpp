#include<iostream>
using namespace std;
int main()
{
	int n, i=0, i1=0, i5=0;
	float x, s=0, s1=0, s5=0;
	cout<<"Cantidad de monedas a ingresar: ";
	cin>>n;
	do
	{
	
	cout<<"Ingrese el valor de la moneda (0.10, 0.25): ";
	cin>>x;
		i = i+1;
		s = s+x;
		if(x==n)
		{
	        i1= i1+1;
	        s1= s1+x;
		}
		else
		{
		i5= i5+1;
		s5= s5+x;
		}
   }
	while(i<n);
	cout<<"Resultado es:"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<i<<endl;
	cout<<"Cantidad total de dinero contado: "<<s<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas:"<<i1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<s1<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas:"<<i5<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<s5<<endl;
	
return 0; // sirve para hacer conteo de monedas hasta llegar a su cantidad exacta puedes contar como quieras de 0.10ctv o de 1.00$.

}
