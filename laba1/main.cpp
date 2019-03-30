#include "Complex.h"

void menu() {
    cout << '\t' << "Vibereti deistvie napisav chislo ot 1 do 4" << endl;
    cout << "1 - plus" << endl;
    cout << "2 - minus" << endl;
    cout << "3 - unnozenie" << endl;
    cout << "4 - delenie" << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Complex result, a,b;
    int answer = 3;
    menu();
    while (answer<1 && answer>4){
    cin >> answer;
    }
    cout << "Vvedite deistvitelty i mnimuu chast 1 chisla: ";
    cin >> a.re >> a.im;
    cout << "Vvedite deistvitelty i mnimuu chast 2 chisla: ";
    cin >> b.re >> b.im;
        switch (answer)
        {
        case 1:
            result = sum(a, b);
            break;
        case 2:
            result = raz(a, b);
            break;
        case 3:
            result = umn(a, b);
            break;
        case 4:
            result = del(a, b);
            break;
        }
    cout << "Resulat: " << '\t' << result.re << " + i" << result.im << endl;
    return 0;
}
