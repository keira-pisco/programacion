//=========================================================
//==> Nombre del programa:Para Calcular la Edad
//==> Archivo:GuevaraNayeli-Laedad.cpp
//==> Autora: Nayeli Guevara
//==> Fecha de elaboracion: 2-05-2022
//==> Fecha de actualizacion: 21-05-2022
//==============================================================

#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
 
 
int main ()
{
	
    int ng_aa, ng_ma, ng_da, ng_an, ng_mn, ng_dn, ng_a, ng_m, ng_d;
 
    cout << "Ingrese Año actual: ";  
    cin >> ng_aa;
    cout << "Ingrese Mes actual: ";
    cin >> ng_ma;
    cout << "Ingrese Dia actual: ";
    cin >> ng_da;
 
    cout << "Ingrese Año nacimiento: ";
    cin >> ng_an;
    cout << "Ingrese Mes de nacimiento: ";
    cin >> ng_mn;
    cout << "Ingrese Fecha de nacimiento: "; 
    cin >> ng_dn;


    if ( ng_da>=ng_dn ){
    ng_d=ng_da-ng_dn;
}
    else
    {   
        ng_dn = ng_dn+30; 
        ng_ma = ng_ma- 1;
        ng_d=ng_da-ng_dn;
    }
 
    if( ng_ma>=ng_mn)
{
	ng_m=ng_ma-ng_mn;
}
	else 
    {  
        ng_mn = ng_mn+12;
	ng_aa = ng_aa-1 ; 
	ng_m= ng_ma - ng_mn;
        
}
    
        ng_a = ng_aa - ng_an;

	cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: para calcular la edad"<<endl;
cout<<"//==> Archivo : GuevaraNayeli-Laedad.cpp"<<endl;
cout<<"//==>Autor: Nayeli Guevara"<<endl;
cout<<"//==>Fecha de elaboración: 2022-05-02"<<endl;
cout<<"//==>Fecha ultima actualización: 2022-05-21"<<endl;
cout<<"//================================================="<<endl;
 
    cout <<"la persona tiene "<<ng_a<<" años "<<ng_m<<" meses y "<<ng_d<<" dias";
    return 0;
    }

