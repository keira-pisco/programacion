#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
 
 
int main ()
{
	
    int aa, ma, da, an, mn, dn, a, m, d;
 
 	cout<<"\n\tEdad\n\n";
    cout << "Ingrese Año actual: ";  
    cin >> aa;
    cout << "Ingrese Mes actual: ";
    cin >> ma;
    cout << "Ingrese Dia actual: ";
    cin >> da;
 
    cout << "\nIngrese Año nacimiento: ";
    cin >> an;
    cout << "Ingrese Mes de nacimiento: ";
    cin >> mn;
    cout << "Ingrese Fecha de nacimiento: "; 
    cin >> dn;


    if ( da>=dn ){
    d=da-dn;
}
    else
    {   
        dn= dn+30; 
        ma= ma- 1;
        d=da-dn;
    }
 
    if( ma>=mn)
{
	m=ma-mn;
}
	else // sirve este programa para encotrar tu edad justa con año, mes y dia correcto con tu fecha de nacimiento y fecha actual.
    {   
        mn=mn+12;
	aa=aa-1 ; 
	m=ma-mn;
        
}
    
        a =aa-an;
 
    cout <<"la persona tiene "<<a<<" años "<<m<<" meses y "<<d<<" dias";
    return 0;
}
