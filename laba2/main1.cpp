#include <iostream>
#include <string>
using namespace std;

int pls(int a, int b);          //сложение
int mins(int a, int b);         //вычитание


int main()
{
    int a, b,itog;
    int c=0;
    int (*f)(int, int);
    cout << "vvedite 2 chisla"<<endl;
    cin >> a >> b;
    cout << endl;
    if(c!=1 || c!=2){
    cout << "poriadok slozeninia, nazmite 1 ili 2:  " << endl << "1 - a+b " << endl << "2 - a-b" << endl;
    cin >> c;
    }
    if(c == 1) f = pls;
    else f = mins;
    itog = f(a, b);
    cout << "Itog: " << itog <<endl;
    f = NULL;
    return 0;

}

int pls(int a, int b) {
    return a + b;
};
int mins(int a, int b) {
    return a - b;
};
