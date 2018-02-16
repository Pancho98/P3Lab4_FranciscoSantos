#include<string>

using namespace std;

#ifndef CARRO_H
#define CARRO_H

class Carro{
	private:
		string color;
		string marca;
		double altura;

	public:
		//contructores
		Carro();
		Carro(string, string, double);
		//mutadores
		string getColor();
		void setColor(string);
		string getMarca();
		void setMarca(string);
		double getAltura();
		void setAltura(double);

		//Destructor
		~Carro();

};

#endif
