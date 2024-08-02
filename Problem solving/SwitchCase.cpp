#include<iostream>
using namespace std;
int main(){
    int N;
    string num;

    cout << "Enter a number between 0 - 10 :";
    cin >> N;

    switch(N){
        case 1:
        num = "One";
        break;
        case 2:
        num = "Two";
        break;
        case 3:
        num = "Three";
        break;
        case 4:
        num = "Four";
        break;
        case 5:
        num = "Five";
        break;
        case 6:
        num = "Six";
        break;
        case 7:
        num = "Seven";
        break;
        case 8:
        num = "Eight";
        break;
        case 9:
        num = "Nine";
        break;
        case 10:
        num = "Ten";
        break;
        default:
        num = "Not in range";
    }
    cout << num;
    return 0;
}