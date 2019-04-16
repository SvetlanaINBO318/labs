#include <iostream>
#include <vector>
#include "main1.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    vector<Student> vec;
    int n;
    cout << "Studentov v spiske :";
    cin >> n;
    for (int i = 0; i < n ; i++) {
        Student* student;
        cout << "Vvedite namei familiu i gruppy: ";
        cin >> student->name >> student->family >> student->group;
        cout << "Vvedite age ";
        cin >> student->age;
        vec.push_back(*student);
    };
    return 0;
}
