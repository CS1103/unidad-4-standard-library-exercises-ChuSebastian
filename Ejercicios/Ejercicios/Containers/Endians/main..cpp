#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    int elem, n;
    cout << "Este programa permite ingresar la cantidad de datos que desee" << endl;
    cout << "Cuantos numeros desea ingresar? " << endl;
    cin >> n;

    for(int i =0; i < n; i++){
        cin >> elem;
        v.push_back(elem);
    }

    int output = 0;

    for(auto it:v) {
        output = it << 24 | ((255 << 8) & it) << 8 | ((255 << 16) & it) >> 8 | ((it >> 24) & 255);
        cout << it << " converts to " << output;
        cout << endl;
    }
    return 0;
}
