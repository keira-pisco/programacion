#include<iostream>//programa de  Ingrith Gissela Elizalde Elizalde
using namespace std;
int main()
{
//contador
int p, c=0, c1=0, c2=0, h;
        float k, al, a=0, a1=0, a2=0 ;

    cout<<"\nIngrese la cantidad de monedas.: "<<endl;
	  cin>>p;


        
        do
        {

    cout<<"Ingrese el valor de la moneda (0.10 - 0.25): "<<endl;  
	cin>>k;
                c ++;
                a = a+k;

                //inicio de condicionales                                                        
				if(k==0.25)
               			 {
                       			 h = h+1;
                                   a1 = a1+k;
                					}else
                        			{
                               		 c2 = c2+1;
                                		a2 = a2+k;                                                               }
   }
        while(c<p);//fin del bucle

        cout<<" monto de monedas ingresadas: "<<c<<endl;
        	cout<<" monto de dinero contado: "<<a<<endl;
        		cout<<"monto de monedas de$0.10 ingresadas: "<<c2<<endl;
        			cout<<"monto en dinero de las monedas de $0.10: "<<a2<<endl;                     
				cout<<"monto de monedas de $0.25 ingresadas: "<<h<<endl;
        	cout<<" monto en dinero de las monedas de $0.25: "<<a1<<endl;

return 0;
}
