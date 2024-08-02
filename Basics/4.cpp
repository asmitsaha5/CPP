#include<iostream>
using namespace std;
int main()
{
    string phrase ="Asmit Saha";
    phrase[6] = 'G';
    cout << phrase << endl;
    cout << phrase.length() << endl;
    cout << phrase[0] << endl;
    cout << phrase.find("Asmit", 0) << endl;
    cout << phrase.substr(2 , 3) << endl;
return 0;
}