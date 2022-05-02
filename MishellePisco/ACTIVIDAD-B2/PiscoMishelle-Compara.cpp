#include <iostream>
using namespace std;
int main()
{
	int c, d ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> c;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> c;
	if (c==d)
		cout<<"Son iguales"<<endl;
	else
		if (c>d)
			cout<<c<<" es mayor"<<endl;
		else
			cout<<d<<" es mayor"<<endl;
	
	return 0;
}
