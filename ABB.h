#pragma once

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string>
#include"Nodo.h"

class ABB
{
public:
	ABB();
	void insertar(Nodo*& arbol, int dato, string palabra, Nodo* padre);
	void imprimir(Nodo* arbol, int contador);
	bool buscar(Nodo* arbol, string palabra);
	void preOrden(Nodo* arbol);
	void posOrden(Nodo* arbol);
	void inOrden(Nodo* arbol);
};

