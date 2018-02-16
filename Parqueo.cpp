#include"Parqueo.h"
#include<string>
#include <iostream>
using namespace std;

Parqueo::Parqueo(){

}

Parqueo::Parqueo(int Personas, int pisos, double altura){
	int N=Personas/10;
	z=pisos;
	if(N<12){
		M=N*0.7;
	}
	if(N>=12){
		M=N*0.4;
	}

	parqueo=new Carro***[M];
	for(int i=0;i<M;i++){
		parqueo[i]=new Carro**[pisos];
		for(int j=0;j<pisos;j++){
			parqueo[i][j]=new Carro*[z];
			for(int k=0;k<z;k++){
				parqueo[i][j][k]=NULL;
			}
		}
	}

}

double Parqueo::getAltura(){
	return altura;
}

void Parqueo::setAltura(double altura){
	this->altura=altura;
}

Carro**** Parqueo::getParqueo(){
	return parqueo;
}

/*Destructor*/
Parqueo::~Parqueo(){
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			for(int k=0;k<10;k++){
				parqueo[i][j][k]=NULL;
				delete parqueo[i][j][k];
			}
			delete[] parqueo[i][j];
		}
		delete[] parqueo[i];
	}
	delete[] parqueo;
}
