#include<iostream>
using namespace std;
int main()
{
    int age = 19;
    int *page = &age;
    double gpa = 7.5;
    double *pgpa = &gpa;
    string name = "Asmit";
    string *pname = &name;


    cout << *page << endl;
    cout << &pgpa << endl;
    cout << &*&pname << endl;
}