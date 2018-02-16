#include<string>
#include"Carro.h"

using namespace std;

#ifndef PARQUEO_H
#define PARQUEO_H

class Parqueo{
	private:
		//atributos
		int N;
		int M;
		int z;
		Carro**** parqueo;
		double altura;

	public:
		//constructores
		Parqueo();
		Parqueo(int, int, double);

		//getters y setters
		double getAltura();
		void setAltura(double);
		Carro**** getParqueo();
		void Parquear(Carro*);

		//Destructor
		~Parqueo();
};

#endif
