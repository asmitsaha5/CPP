#include <iostream>
using namespace std;

void sayhi(string name, int age);

int main()
{
    sayhi("Asmit Saha", 19);
    sayhi("Aranya Dutta", 20);
}
void sayhi(string name, int age)
{
    cout << "Hello " << name << " You are " << age << " years old." << endl;
}
