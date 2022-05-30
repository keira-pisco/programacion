#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <stdlib.h>
using namespace std;
#include "NG_NAYELI.h"
int main()
{
	setlocale(LC_ALL, "");
	int op, flag;
	do
	{
		system("cls");
		menu:
	    cout<<"\n\n\t\t\t\t----------BIENVENIDOS-----------"<<endl;
		cout<<"\t\t\t----------Fundamento de Programacion-----------"<<endl;
		cout<<"\t\t\t----------------Menú de opciones----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. Todos los trabajos de HECTOR ESCOBAR"<<endl;
		cout<<"2. Todos los trabajos de NAYELI GUEVARA"<<endl;
		cout<<"3. Todos los trabajos de GLADYS PISCO"<<endl;
		cout<<"4. Todos los trabajos de INGRID ELIZALDE "<<endl;
		cout<<"5. Todos los trabajos de Martinez Bianka"<<endl;
		cout<<"0. Salir"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>op;
		switch(op)
		{
			case 1:
				
			break;
			case 2:
				NG_Menu();
			break;
			case 3:
				
			break;
			case 4:
				
			break;
			case 5:
		
				break;
			case 0:
				if(op!=0 && op>0){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get();
				   cout<<flag<<endl;
			break;
		}
	}
	while(op != 0);
	
	return(0);
}
