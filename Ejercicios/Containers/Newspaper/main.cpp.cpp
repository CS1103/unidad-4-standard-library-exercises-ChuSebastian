#include <iostream>
#include <map>
using namespace std;

int main(){
    int N; // Es el numero de tests que haremos N ( 0 < N <= 5)
    int K; // Cada test describe un entero K, que es la cantidad de numeros junto con su respectivo precio. K ( 0 < K <= 100)
    int M; // Es la cantidad de lineas que ocupa nuestro articulo M ( 0 < M < 150000)

    map <char, double>::iterator it;
    char letra;
    double precio, total;

    cout << "Ingresa la cantidad de test cases: " << endl;
    cin >> N;
    cout << endl;

    if ( N < 0 || N >= 5) {
        cout << "No se ingreso un numero de test cases adecuado, prueb con un numero entre el 1 y el 5";
        exit(1);
    }

    for (int i = 0; i < N; i++){
        map <char, double> contenedor;
        total = 0;

        cout << "Cantidad de letras: " << endl;
        cin >> K;
        cout << endl;

        if ( K < 0 || K >= 100) {
            cout << "No se ingreso una correcta cantidad de numeros, pruebe con un numero entre el 1 y el 100";
            exit(2);
        }

        cout << "Ingrese una letra con su respectivo precio y luego dando enter para la siguiente letra" << endl;
        for (int j = 0; j < K; j++){
            cin >> letra >> precio;
            contenedor[letra] = precio; //se usa letra como subíndice porque se usa como key, precio se usa como elemento
        }
        cout << endl;

        cout << "Ingrese la cantidad de lineas que su articulo tendra: " << endl;
        cin >> M;
        cin.ignore();
        cout << endl;

        if ( M < 0 || M >= 150000) {
            cout << "Se debe ingresar el numero de filas adecuado, pruebe con numero entre el 1 y 150000";
            exit(3);
        }

        cout << "Ingrese su texto, asegurese de que al terminar su linea presione la tecla enter para ir a la siguiente" << endl;
        for (int z = 0; z < M; z++){
            string line;
            line = "";
            getline (cin, line);
            int size = line.size();

            for (int l = 0; l < size; l++){
                it = contenedor.find(line[l]);

                if(it != contenedor.end())
                    total += it -> second;
            }
        }
        total = total / 100;
        cout << endl;
        cout << "El precio total del texto ingresado es: " << total << endl;
        contenedor.clear();
    }

    return 0;
}