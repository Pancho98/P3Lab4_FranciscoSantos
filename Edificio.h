#include<string>

using namespace std;

#ifndef EDIFICIO_H
#define EDIFICIO_H

class Edificio{
	private:
		//atributos
		int personas;
		int pisos;

	public:
		//constructores
		Edificio();
		Edificio(int, int);
		//getters y setters
		int getPersonas();
		void setPersonas(int);
		int getPisos();
		void setPisos(int);


		//Destructor
		~Edificio();
};


#endif
