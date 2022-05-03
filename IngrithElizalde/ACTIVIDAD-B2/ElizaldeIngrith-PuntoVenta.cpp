#include<iostream>
using namespace std;//programa realizado//Ingrith Gissela Elizalde Elizalde
int main()
{//INICIO DEL PROGRAMA
        int a=0,c=0;
        float x, n, cos, iva, des, ivacos, total ;                     
        cout<<endl;
        cout<<"Ingrese la cantidad deproductos a comprar."<<endl;
        cin>>n;
        
        do {cout<<"\nIngrese el precio del producto. ";
                cin>> x;
                c ++;
                a =a+x;
        }while(c<n);


      
        cos = a;
        iva = cos*0.12;
        des = cos*0.10;
        ivacos = cos+iva;
        total= ivacos-des;
                         
        cout<<"\nValor a pagar solo del iva. : "<<ivacos<<endl;
        cout<<"\nvalor tital a pagar"<<total;
	return 0;	
		}

