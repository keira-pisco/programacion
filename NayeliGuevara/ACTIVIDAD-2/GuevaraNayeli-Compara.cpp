#include <iostream>
using namespace std;
int main()
{
	int x,y ;
	cout<<"Ingrese los numeros a comparar"<<endl;
	cin>> x;
	cin>> y;
	if (x==y)
	{
		cout<<"iguales"<<endl;
	}

	else if (x>y)
		{
			cout<<x<<" es mayor"<<endl;
		}
		else{
			cout<<y<<"es mayor"<<endl;
		} // esta programacion sirve para comparar los numero cuando uno es mayor o igual que el otro
	
	return 0;
}
