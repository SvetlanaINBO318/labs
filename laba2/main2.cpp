#include <iostream>
#include <cmath>
#include <time.h>
using namespace std;

int * reverse(int * arr);//инвертирование массива
int * sortPLS(int * arr);//сортировочка в убывание 
int * sortMIN(int * arr);//сортировочка по позрастанию

int *(*ykaz(int *arr))(int *);//указатель

int main(int argc, char const *argv[])
{
    srand(time(0));
        int *arr=new int[10];
        int *(*f)(int[]);
        cout << "DO: " << endl;
        for (int i = 0; i < 10; i++) {
            arr[i]= rand() % 10;      // заполнение
            cout << arr[i] << ' ';
        }
        cout << endl;
        f = ykaz(arr);
        arr = f(arr);
        cout<<"POSLE: ";
        for (int i = 0; i < 10; i++) {
            cout << arr[i] << " ";
        }
        f = NULL;
        arr = NULL;
        system("pause");
        return 0;

}


int * reverse(int * arr) {
    for (int i = 0; i < 10 / 2; i++)
        swap(arr[i],arr[10 - 1 - i]);
    return arr;
}

int * sortPLS(int * arr) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10;j++) {
            if (arr[i] > arr[j])
                swap(arr[i],arr[j]);
        }
    }
    return arr;
}

int * sortMIN(int * arr) {   
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10;j++) {
            if (arr[i] < arr[j])
                swap(arr[i],arr[j]);
        }
    }
    return arr;
}

int *(*ykaz(int *arr))(int *) {
    int k1=arr[0], sum=0;
    for (int i = 0; i < 10; i++) {
        sum = sum + arr[i];
    }
    cout << "pervoe chislo " << k1 << " summa vseh elementov " << sum << endl;
    if (k1 == sum) { return reverse; }
    else if (k1 > sum) { return sortPLS; }
    else { return sortMIN; }
}
