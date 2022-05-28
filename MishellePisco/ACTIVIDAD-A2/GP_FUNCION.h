
int GP_Suma()
{
	int GP_ax, GP_bx, GP_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>GP_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>GP_bx;
	GP_cx = GP_ax+GP_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<GP_ax<<" + "<<GP_bx<<" es igual a: "<<GP_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor:GLADYS PISCO"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int GP_CuentaMoneda()
{
	int GP_n, GP_c, GP_c1, GP_c2, GP_cl, GP_cz;
	float GP_x, GP_al, GP_a, GP_a1, GP_a2, GP_az;
	GP_c = 0;
	GP_c1 = 0;
	GP_c2 = 0;
	GP_a = 0;
	GP_a1 = 0;
	GP_a2 = 0;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>GP_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>GP_x;
		GP_c = GP_c+1;
		GP_a = GP_a+GP_x;
		if(GP_x==0.25)
			{
				GP_c1 = GP_c1+1;
				GP_a1 = GP_x+GP_a1;
			}
		else
			{
				GP_c2 = GP_c2+1;
				GP_a2 = GP_a2+GP_x;
			}
	}
	while(GP_c<GP_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<GP_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<GP_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<GP_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<GP_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<GP_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<GP_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: GLADYS PISCO"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int GP_PuntoVenta()
{
	float GP_xx, GP_cc, GP_at, GP_nn, GP_vb, GP_viva, GP_vdes, GP_vfi, GP_vft;
	GP_cc = 0;
	GP_at = 0;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> GP_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<GP_cc+1 <<": " ;   cin>> GP_xx;
		GP_cc = GP_cc+1;
		GP_at = GP_at+GP_xx;
	}
	while(GP_cc<GP_nn);			
	GP_vb = GP_at;
	GP_viva = GP_vb*0.12;
	GP_vdes = GP_vb*0.10;
	GP_vfi = GP_vb+GP_viva;
	GP_vft = GP_vfi-GP_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<GP_vfi<<endl;
	cout<<"Valor final es: "<<GP_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: GLADYS PISCO"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int GP_Edad()
{
	int GP_diaAct; 
	int GP_mesAct; 
	int GP_anoAct; 
	int GP_diaNac; 
	int GP_mesNac; 
	int GP_anoNac;			
	int GP_anoR, GP_mesR, GP_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> GP_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> GP_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> GP_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> GP_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> GP_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> GP_diaNac;			
	if (GP_anoAct > GP_anoNac)
	{
		if(GP_mesAct > GP_mesNac)	 
		{
			GP_anoR=GP_anoAct-GP_anoNac;	
			GP_mesR=GP_mesAct-GP_mesNac;					
		}
		else
		{
			GP_anoR=GP_anoAct-GP_anoNac-1;	
			GP_mesR=(GP_mesAct+12)-GP_mesNac;					
		}												
		if(GP_diaAct > GP_diaNac)
		{				
			GP_diaR=GP_diaAct-GP_diaNac;
		}
		else
		{
			GP_mesR=GP_mesR-1;
			GP_diaR=(GP_diaAct+30)-GP_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<GP_anoR<< endl;
		cout << " Mes: " <<GP_mesR << endl;
		cout << " Dia: " << GP_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int GP_Compara()
{
	int GP_aa, GP_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> GP_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> GP_bb;
	if (GP_aa==GP_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (GP_aa>GP_bb)
		{
		cout<<GP_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<GP_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: GLADYS PISCO"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int GP_Menu()
{
	int opp, flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t------PROGRAMA REALIZADO POR LOZADA HECTOR------"<<endl;
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
				GP_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				GP_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				GP_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				GP_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				GP_PuntoVenta();
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
