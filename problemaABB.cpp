// problemaABB.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include"ABB.h"
using namespace std;

int main()
{
    Nodo* arbol = NULL;
    ABB* arbolito = new ABB();

    string entrada = "hola amigos camas hola camas camas gol";    //CADENA DE ENTRADA QUE SE QUIERE ANALIZAR
    entrada = entrada + " ";
    string aux = "";
    string concat = "";
    int repeticiones = 1;
    for (int i = 0; i < entrada.length(); i++)
    {
        aux = entrada[i];
        if (!aux._Equal(" "))
        {
            concat = concat + aux;
        }
        else
        {
            if (arbolito->buscar(arbol, concat))
            {
                cout << "La palabra se encontro y se incremento su contador " << endl;
            }
            else
            {
                arbolito->insertar(arbol, repeticiones, concat, NULL);
            }
            aux = "";
            concat = "";
        }
    }

    arbolito->preOrden(arbol);
}

