#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int main(){

    string ID;
    //la cadena de letras que representan el codigo de la persona

    vector <string> v;
    // se almacenaran las cadenas en este vector


    while (cin >> ID) {
    //Usamos cin y no getline porque se supone que el ID no requiere espacios

        if (ID == "#")
            break; // si el usuario ingresa un "#" se termina el bucle

        else
            v.emplace_back(ID); // aquí se almacenan los id


    } // se acaba el bucle while


    // Para hacer las permutaciones usamos next_permutation de la stl algorithm
    // Necesitamos hacer las permutaciones en el mismo vector y luego imprimir el vector


    for (auto &i:v) {

        if (next_permutation(i.begin(), i.end()))

            // El next permutation que usaremos requiere 2 parametros.
            // Los parametros son dos iteradores bidireccionales.
            // El primero apunta al inicio del string y el otro al final.

            cout << i << endl;

        else
            cout << "No succesor" << endl;
    }




}