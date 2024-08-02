#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number : ";
    cin >> n;

    if(n > 5){
        cout << "The number is greater than 5";
    }
    else if(n == 5){
        cout << "The number is equal to five";
    }
    else if(n < 5){
        cout << "The number is Less than five";
    }
    else{
        cout << "Not a valid number";
    }
    return 0;
}