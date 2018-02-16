#include<iostream>
#include"Parqueo.h"
#include"Carro.h"
#include<string>
using namespace std;
int main(){
	int personas, pisos;
	double altura;
	cout<<"Ingrese la cantidad de Personas: "<<endl;
	cin>>personas;

	cout<<"Ingrese la cantidad de Pisos: "<<endl;
	cin>>pisos;

	cout<<"Ingrese la altura maxima del Parqueo:"<<endl;
	cin>>altura;

	Parqueo* parqueo=new Parqueo(personas,pisos,altura);
	int opc=1;
	while(opc!=4){
		cout<<"---------------Menu---------------"<<endl;
		cout<<"1. Ingresar Carro al Parqueo"<<endl;
		cout<<"2. Sacar carro del Parqueo"<<endl;
		cout<<"3. Listar Parqueos"<<endl;
		cout<<"4. Salir del Programa"<<endl;
		cin>>opc;
		switch(opc){
			case 1:{
					   string color, marca;
					   double cAltura;
					   cout<<"Ingrese Color del Carro: ";
					   cin>>color;
					   cout<<"Ingrese Marca del Carro: ";
					   cin>>marca;
					   cout<<"Ingrese la altura del Carro: ";
					   cin>>cAltura;
					   Carro* carro= new Carro(color, marca, cAltura);
					   parqueo->Parquear(carro);
				   }
				   break;
			case 2:{

				   }
				   break;

			case 3:{

				   }
				   break;
			case 4:{

				   }
				   break;
		}
	}

	return 0;
}
