#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;


int main() {

    int cases, pos, c = 0;

    vector<int> vPos;
    vector<string> vDatos;

    string s1, s2, num;
    cin >> cases;
    getchar();

    while (c != cases) {
        getchar ();
        getline(cin, s1);
        stringstream s(s1);

        while (s >> pos)
            vPos.push_back(pos);

        getline(cin, s2);
        stringstream ss(s2);

        while (ss >> num)
            vDatos.push_back(num);


        vector<pair<int, string>> vF;


        for (int i = 0; i < vPos.size(); i++)
            vF.emplace_back(vPos.at(i), vDatos.at(i));

        sort(vF.begin(), vF.end());

        for (auto &item:vF) {
            cout << item.second << "  ";
        }

        vPos.clear();
        vDatos.clear();
        vF.clear();

        cout << endl;

        c++;
    }
}
