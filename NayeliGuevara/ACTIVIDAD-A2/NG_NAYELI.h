//
// FUNCIONES IMPLEMENTADAS POR NAYELI GUEVARA
//
int NG_Suma()
{
	int NG_ax, NG_bx, NG_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>NG_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>NG_bx;
	NG_cx = NG_ax+NG_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<NG_ax<<" + "<<NG_bx<<" es igual a: "<<NG_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: NAYELI GUERVARA"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int NG_CuentaMoneda()
{
	int NG_n, NG_c, NG_c1, NG_c2, NG_cl, NG_cz;
	float NG_x, NG_al, NG_a, NG_a1, NG_a2, NG_az;
	NG_c = 0;
	NG_c1 = 0;
	NG_c2 = 0;
	NG_a = 0;
	NG_a1 = 0;
	NG_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>NG_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>NG_x;
		NG_c = NG_c+1;
		NG_a = NG_a+NG_x;
		if(NG_x==0.25)
			{
				NG_c1 = NG_c1+1;
				NG_a1 = NG_x+NG_a1;
			}
		else
			{
				NG_c2 = NG_c2+1;
				NG_a2 = NG_a2+NG_x;
			}
	}
	while(NG_c<NG_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<NG_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<NG_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<NG_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<NG_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<NG_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<NG_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: NAYELI GUERVARA"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int NG_PuntoVenta()
{
	float NG_xx, NG_cc, NG_at, NG_nn, NG_vb, NG_viva, NG_vdes, NG_vfi, NG_vft;
	NG_cc = 0;
	NG_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> NG_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<NG_cc+1 <<": " ;   cin>> NG_xx;
		NG_cc = NG_cc+1;
		NG_at = NG_at+NG_xx;
	}
	while(NG_cc<NG_nn);			
	NG_vb = NG_at;
	NG_viva = NG_vb*0.12;
	NG_vdes = NG_vb*0.10;
	NG_vfi = NG_vb+NG_viva;
	NG_vft = NG_vfi-NG_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<NG_vfi<<endl;
	cout<<"Valor final es: "<<NG_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: NAYELI GUERVARA"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int NG_Edad()
{
	int NG_diaAct; 
	int NG_mesAct; 
	int NG_anoAct; 
	int NG_diaNac; 
	int NG_mesNac; 
	int NG_anoNac;			
	int NG_anoR, NG_mesR, NG_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> NG_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> NG_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> NG_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> NG_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> NG_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> NG_diaNac;			
	if (NG_anoAct > NG_anoNac)
	{
		if(NG_mesAct > NG_mesNac)	 
		{
			NG_anoR=NG_anoAct-NG_anoNac;	
			NG_mesR=NG_mesAct-NG_mesNac;					
		}
		else
		{
			NG_anoR=NG_anoAct-NG_anoNac-1;	
			NG_mesR=(NG_mesAct+12)-NG_mesNac;					
		}												
		if(NG_diaAct > NG_diaNac)
		{				
			NG_diaR=NG_diaAct-NG_diaNac;
		}
		else
		{
			NG_mesR=NG_mesR-1;
			NG_diaR=(NG_diaAct+30)-NG_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<NG_anoR<< endl;
		cout << " Mes: " <<NG_mesR << endl;
		cout << " Dia: " << NG_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int NG_Compara()
{
	int NG_aa, NG_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> NG_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> NG_bb;
	if (NG_aa==NG_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (NG_aa>NG_bb)
		{
		cout<<NG_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<NG_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: NAYELI GUERVARA"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int NG_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t------PROGRAMA REALIZADO POR NAYELI GUERVARA------"<<endl;
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. SUMA DE 2 NÚMEROS"<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADORA DE EDAD"<<endl;
		cout<<"4. COMPARACIÓN DE 2 NÚMEROS"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>opp;
		switch(opp)
		{
			case 1:
				system("cls");
				NG_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				NG_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				NG_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				NG_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				NG_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(opp!=0 && opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				flag=cin.ignore().get();
				cout<<flag<<endl;
				
		}
	}
	while(opp != 0);

	return(0);
}
