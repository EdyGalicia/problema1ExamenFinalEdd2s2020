#pragma once

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
using namespace std;

class Nodo
{
public:
	Nodo(string palabra, int dato, Nodo* padre);

	int getDato();
	void incDato();

	string getPalabra();

	Nodo* getIzq();
	void setIzq(Nodo* izq);

	Nodo* getDer();
	void setDer(Nodo* der);

	//private:
	int dato;
	string palabra;
	Nodo* izq;
	Nodo* der;
	Nodo* padre;
};

