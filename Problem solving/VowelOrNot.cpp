#include <iostream>
using namespace std;
int main()
{
    char c;
    cout << "Enter a Letter ";
    cin >> c;
    if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        cout << "This is a Vowel";
    }
    else
    {
        cout << "This is not a vowel";
    }
    return 0;
}