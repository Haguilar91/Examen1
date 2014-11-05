#include "Evaluador.h"
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>
#include <queue>
using namespace std;


//Devuelve el ultimo numero de mi_lista (dado)
list<int>::iterator getUltimo(list<int> mi_lista)
{
    list<int>::iterator i = begin();
       //cout<<mi_lista.back()<<endl;
        int ultimo = mi_lista.back();
      // i=(*ultimo);
        //cout<<"Ultimo "<<mi_lista.end()<<endl;

        return i;
}

//Devuelve true si todos los numero de mi_set (dado) son pares
bool sonPares(set<int> mi_set)
{
    for(set<int>::iterator i = mi_set.begin();i!=mi_set.end();i++)
    {
        if(*i%2!=0)
        {
            return false;
        }
    }
    return true;
}

//Devuelve un set que contenga unicamente los numeros de mi_pila (dado)
set<int> convertirASet(queue<int> mi_pila)
{
    set<int> mi_set;
     int tamano = mi_pila.size();
     for(int i = 0;i<tamano;i++)
    {

        mi_set.insert(mi_pila.front());
        mi_pila.pop();
        //mi_set.
      //  cout<<"Pila "<<mi_pila.front()<<endl;

      //  cout<<"Set "<<*mi_set.end()<<endl;



    }
    return mi_set;
}

//Devuelve una lista que contenga unicamente los numeros presentes en agenda (dado) asociados con la llave nombre (dado)
list<int> obtenerNumeros(multimap<string,int> agenda, string nombre)
{
    list<int>numeros;
 /* multimap.
    for(multimap<string,int>::iterator i = agenda.begin();i!=agenda.end();i++)
    {
        if(i.First()==nombre)
            {
                numeros.insert(i.Last());
            }
    }

    */
    return numeros;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 1;
}
