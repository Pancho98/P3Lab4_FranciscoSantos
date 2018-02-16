#include"Edificio.h"
#include<string>
#include<iostream>

Edificio::Edificio(int personas, int pisos){
	this->personas = personas;
	this->pisos = pisos;
}

Edificio::Edificio(){

}

int Edificio::getPersonas(){
	return this->personas;
}

void Edificio::setPersonas(int personas){
	this->personas=personas;
}

int Edificio::getPisos(){
	return this->pisos;
}

void Edificio::setPisos(int pisos){
	this->pisos=pisos;
}

/*Destructor*/
Edificio::~Edificio(){

}
