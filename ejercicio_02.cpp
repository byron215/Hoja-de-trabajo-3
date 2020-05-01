#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <fstream>
using namespace std;
int main () {
		fstream archivo ("registro 1.txt");
int a,b1,b2,b3,op,op2;
float prom1,prom2,prom3,sum1,sum2,sum3,full;
while (1){

cout<<"\n1.-pizza grande\n";
cout<<"2.-pizza familiar\n";
cout<<"3.-pizza fiesta\n";
cout<<"5.-salir\n";
cout<<"4.-finalizar\n";
cin>>a;
	cin.ignore();
		if ((a>=1)&&(a<=5))
		
		{
			if(!archivo.is_open())
			{
				archivo.open("registro 1.txt", ios::out|ios::app);
			
		}
switch (a){
	
	case 1:
		cout<<"cuantas pizzas\n";
		cin>>b1;
		cout<<"precio unitario: Q80.00\n";
		prom1=(80*b1)*0.1;
			cout<<"se le desconto 10% a su compra\n";
		cout<<"el total es:"<<"Q"<<(80*b1)-prom1;
		break;
		case 2:
			cout<<"cuantas pizzas\n";
		cin>>b2;
		cout<<"precio unitario: Q115.00\n";
		prom2=(115*b2)*0.15;
			cout<<"se le desconto 15% a su compra";
		cout<<"el total es:"<<"Q"<<(115*b2)-prom2;
		break;
		case 3:
			cout<<"cuantas pizzas\n";
		cin>>b3;
		cout<<"precio unitario: Q100.00\n";
		prom3=(100*b3)*0.2;
		cout<<"se le desconto 20% a su compra";
		cout<<"el total es:"<<"Q"<<(100*b3)-prom3;
		break;
		
	case 4:
				

cout<<"\npizzas grandes:\n"<<b1<<"\ntotal"<<80*b1-prom1;
cout<<"\npizzas familiares\n"<<b2<<"\ntotal"<<115*b2-prom2;
cout<<"pizzas fiestas\n"<<b3<<"\ntotal"<<100*b3-prom3;
	sum1=80*b1-prom1;
	sum2=115*b2-prom2;
	sum3=100*b3-prom3;
full=sum1+sum2+sum3;
	cout<<"el total vendido en el dia es:"<<full;
		
	break;
	case 5:
				cout<<"\n1.- Guardar Registro\n2.-Regresar\n";
		cin>>op2;
		if(op2==1) 
		{
			system("cls");
		cout<<"Registro Guardado con Exito...\n";
		system ("pause");
		system ("cls");
	
			
	archivo<<"\npizzas grandes:\n"<<b1<<"se le desconto 10% a su compra"<<"\ntotal"<<80*b1-prom1<<endl;
archivo<<"\npizzas familiares\n"<<b2<<"se le desconto 15% a su compra"<<"\ntotal"<<115*b2-prom2<<endl;
archivo<<"pizzas fiestas\n"<<b3<<"se le desconto 20% a su compra"<<"\ntotal"<<100*b3-prom3<<endl;
	sum1=80*b1-prom1;
	sum2=115*b2-prom2;
	sum3=100*b3-prom3;
full=sum1+sum2+sum3;
	archivo<<"el total vendido en el dia es:"<<full<<endl;
	exit (EXIT_SUCCESS);

		
	
			
	
		cout<<"\nprecione una tecla para volver al menu\n";
			
		
		}
		archivo.close ();
		


		
			
	
}
	

}
}

return 0;

}