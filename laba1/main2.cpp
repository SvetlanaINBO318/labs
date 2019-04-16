#include "Complex.h"

int main() {
    ifstream f;
    f.open("one.txt");
    int k=0;
    f >> k;
    Complex* arr = new Complex[k];
    for (int i = 0; i < k; i++) {
        f >> arr[i].re;
        f >> arr[i].im;
    }
    f.close();
    int a = 0;
    float b = abs(arr[0]);
    for (int i = 0; i < k; i++) {
        if (b <= abs(arr[i])) {
            a = i;
            b = abs(arr[i]);
        }
    }
    cout << "Maximum: " << a << endl;
    delete[] arr;
    return 0;
}
