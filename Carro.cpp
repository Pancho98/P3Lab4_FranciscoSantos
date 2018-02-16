#include"Carro.h"
#include<string>
#include <iostream>
using namespace std;

Carro::Carro(){

}

Carro::Carro(string color, string marca, double altura){
	this->color=color;
	this->marca=marca;
	this->altura=altura;
}

string Carro::getColor(){
	return color;
}

void Carro::setColor(string color){
	this->color=color;
}

string Carro::getMarca(){
	return marca;
}

void Carro::setMarca(string marca){
	this->marca=marca;
}

double Carro::getAltura(){
	return altura;
}

void Carro::setAltura(double altura){
	this->altura=altura;
}

/*Destructor*/
Carro::~Carro(){

}
