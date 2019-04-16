#include <iostream>
#include <list>
#include "main.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    list<Complex> c;
    int n;
    cout << "Kol-vo chisel: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        Complex comp();
        cout << "Vvedite deist i mnim chast:";
        cin >> comp;
        c.push_back(comp);
    }
    return 0;
}
