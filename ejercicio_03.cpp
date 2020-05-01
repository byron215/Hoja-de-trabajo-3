include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main (){

	fstream archivo ("registro 2.txt");
	
int a,b,c,d,op2,k,e;
cout<<"cuantos datos quiere ingresar";
cin>>k;
for ( int i=1; i<=k; i++){





cout<<"\n edad del conductor";
cin>>a;
cout<<"1.-modelo A";
cout<<"2.-modelo B";
cout<<"3.-salir";
cin>>b;
}
cin.ignore();
		if ((b>=1)&&(b<=3))
		{
			if(!archivo.is_open())
			{
				archivo.open("registro 2.txt", ios::out);
	
		}
switch (b){
case 1:
cout<<"1.-color blanco";
cout<<"2.-color metalizado";
cout<<"3.-otros";
cin>>c;
switch (c){
	case 1:
		
		
		cout<<"blanco: Q240.50";
		if (a<31){
			cout<<"incremento de 25%";
			cout<<"el total a pagar es:"<<(240.50)*0.25+(240.50);
			
		}
			if ((a>=31)&&(a<=65)){
			cout<<"incremento de 0%";
			cout<<"total a pagar es:"<<240.50;
		}
		
		
		if (a>65){
			cout<<"incremento del 30%";
			cout<<"el total a pagar es:" <<(240.50)*0.30+(240.50);
		}
		
		
		cout<<"la edad del conductor es:"<<a;
		cout<<"modelo: A";
		
		break;
		case 2:
		cout<<"metalizado: Q330.00";
		if (a<31){
			cout<<"incremento de 25%";
			cout<<"el total a pagar es:"<<(330)*0.25+(330);
			
		}
		
		if (a>65){
			cout<<"incremento del 30%";
			cout<<"el total a pagar es:" <<(330)*0.30+(330);
		}
		if ((a>=31)&&(a<=65)){
			cout<<"incremento de 0%";
			cout<<"total a pagar es:"<<330;
		}
		
		cout<<"la edad del conductor es:"<<a;
		cout<<"modelo: A";
		break;
	case 3:
		cout<<"otros: Q270.50";
		if (a<31){
			cout<<"incremento de 25%";
			cout<<"el total a pagar es:"<<(270.50)*0.25+(270.50);
			
		}
		
		if (a>65){
			cout<<"incremento del 30%";
			cout<<"el total a pagar es:" <<(270.50)*0.30+(270.50);
		}
		if ((a>=31)&&(a<=65)){
			cout<<"incremento de 0%";
			cout<<"total a pagar es:"<<270.50;
		}
		
		cout<<"la edad del conductor es:"<<a;
		cout<<"modelo: A";	
		
}	
break;
case 2:
	cout<<"1.-color blanco";
cout<<"2.-color metalizado";
cout<<"3.-otros";
cin>>d;
switch (d){
case 1:
	cout<<"blanco: Q300.00";
		if (a<31){
			cout<<"incremento de 25%";
			cout<<"el total a pagar es:"<<(300)*0.25+(300);
			
		}
		if ((a>=31)&&(a<=65)){
			cout<<"incremento de 0%";
			cout<<"total a pagar es:"<<300;
		}
		
		if (a>65){
			cout<<"incremento del 30%";
			cout<<"el total a pagar es:" <<(300)*0.30+(300);
		}
		
			
		
		cout<<"la edad del conductor es:"<<a;
		cout<<"modelo: B";	
		break;
		case 2:
		cout<<"metalizado: Q360.50";
		if (a<31){
			cout<<"incremento de 25%";
			cout<<"el total a pagar es:"<<(360.50)*0.25+(360.50);
			
		}
		if ((a>=31)&&(a<=65)){
			cout<<"incremento de 0%";
			cout<<"total a pagar es:"<<360.50;
		}
		
		if (a>65){
			cout<<"incremento del 30%";
			cout<<"el total a pagar es:" <<(360.50)*0.30+(360.50);
		}
		
			
		
		cout<<"la edad del conductor es:"<<a;
		cout<<"modelo: B";	
		break;
		case 3:
			cout<<"otros: Q330";
		if (a<31){
			cout<<"incremento de 25%";
			cout<<"el total a pagar es:"<<(330)*0.25+(330);
			
		}
		if ((a>=31)&&(a<=65)){
			cout<<"incremento de 0%";
			cout<<"total a pagar es:"<<330;
		}
		
		if (a>65){
			cout<<"incremento del 30%";
			cout<<"el total a pagar es:" <<(330)*0.30+(330);
		}
		
			
		
		cout<<"la edad del conductor es:"<<a;
		cout<<"modelo: B";	
			
	}
	
break;
case 3:
	cout<<"1.- Guardar Registro\n2.-Regresar\n";
		cin>>op2;
		
		if(op2==1) 
		{
			
			
		system("cls");
		cout<<"Registro Guardado con Exito...\n";
		system ("pause");
		system ("cls");
		exit (EXIT_SUCCESS);

}
	
		
		archivo.close ();





		

	
}
}

return 0;
}


