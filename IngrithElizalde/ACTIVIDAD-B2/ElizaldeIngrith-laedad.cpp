
#include<iostream>//programa de Ingrith Gissela Elizalde Elizalde
using namespace std;
int main(){//inicio del programa
	int ed,diac,meac,anac,dina,mena,anna;
	
	
	cout<<"Ingrese el año actual"<<endl;
	cin>>anac;
	cout<<"Ingrese el mes actual"<<endl;
	cin>>meac;
	cout<<"Ingrese el dia atual"<<endl;
	cin>>diac;
	
	cout<<endl;//paradarun espacio
	cout<<endl;
	
	cout<<"Ingrese el ano de nacimiento."<<endl;
	cin>>anna;
	cout<<"Ingrese el mes de nacimiento."<<endl;
	cin>>mena;
	cout<<"Ingrese el dia de nacimiento"<<endl;
	cin>>dina;
	if(mena < meac){
		
		ed=anac-anna;
		//condicionales
	}else if(mena<=meac)
	   if(diac<=dina){
		
		ed=anac-anna;
		
	}else if(mena>meac& dina>diac)
	   {(ed=anac-anna)-1;
	   }
	
	cout<<ed;
	
	
	return 0;
}
	
