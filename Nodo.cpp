#include "Nodo.h"


Nodo::Nodo(string palabra, int dato, Nodo* padre)
{
	this->dato = dato;
	this->palabra = palabra;
	this->izq = NULL;
	this->der = NULL;
	this->padre = padre;
}

int Nodo::getDato() {
	return this->dato;
}

void Nodo::incDato() {
	this->dato = dato + 1;
}

string Nodo::getPalabra()
{
	return this->palabra;
}

//getter y setter de hijo izquierdo
Nodo* Nodo::getIzq() {
	return this->izq;
}
void Nodo::setIzq(Nodo* izq) {
	this->izq = izq;
}

//getter y setter de hijo derecho
Nodo* Nodo::getDer() {
	return this->der;
}
void Nodo::setDer(Nodo* der) {
	this->der = der;
}
