#include <iostream>
#include<conio.h>
#include<string>
using namespace std;
int main (){
	string b;
	int a,c;
cout<<"cantidad de jugadores:  ";
cin>>a;
for ( int i=1; i<=a; i++){

cout<<"jugador   "<<i<<"\n"; 
cout<<"Nacionalidad: ";
cin>>b;
cout<<"Edad: ";
cin>>c;
cout<<"Sueldo fijo: $2500.00\n";
cout<<"Bono: $500.00\n";
if((c>=15)&&(c<=20)) {
	cout<<"incremento de: $1400.00\n";
}
  if((c>=21)&&(c<=25)){

cout<<"incremento de: $1500.00\n";
}
if((c>=26)&&(c<=30)){

cout<<"incremento de: $1200.00\n";
}
 if (c>30){

cout<<"incremento de: $800.00\n";
}

}

if((c>=15)&&(c<=20)) {
cout<<"------------------------------------------------\n";

cout<<"total de planilla: "<<"$"<<(2500*a)+(500*a)+(1400*a);
}
 if((c>=21)&&(c<=25)){

cout<<"total de planilla:  "<<"$"<<(2500*a)+(500*a)+(1500*a);
}
if((c>=26)&&(c<=30)){

cout<<"total de planilla:   "<<"$"<<(2500*a)+(500*a)+(1200*a);
}
 if (c>30){

cout<<"total de planilla:    "<<"$"<<(2500*a)+(500*a)+(800*a);
}

if((c>=15)&&(c<=20)){


cout<<"\njugadores de 15 y 20 años:"<<a;
}
if((c>=21)&&(c<=25)){
	cout<<"\njugadores de 21 y 25 años: "<<a;
}
if((c>=26)&&(c<=30)){
	cout<<"\njugadores de 26 y 30 años: "<<a;
}
if(c>30){
	cout<<"\njugadores de 30 años en adelante: "<<a;
}

getch ();
}
