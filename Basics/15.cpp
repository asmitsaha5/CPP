#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the secound number: ";
    cin >> num2;
    cout << "Enter the operation: ";
    cin >> op;

    int result;
     if(op == '+'){
        result = num1 + num2;
     }
     else if(op == '-'){
        result =num1 - num2;
     }
     else if(op == '/'){
        result = num1 / num2;
     }
     else if(op == '*'){
        result = num1 * num2;
     }
     else{
        cout << "Invalid operator";
     }
    cout << result;
}