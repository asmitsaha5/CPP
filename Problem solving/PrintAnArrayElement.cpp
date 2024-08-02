#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the number of array element :";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array" << endl;
    for(int i = 0; i<n; ++i){
        cin >> arr[i];
    }
    int index;
    cout << "Enter the index that you want to print : " ;
    cin >> index;

    if(index >= 0 && index < n){
        cout << "The element is " << index << endl;
    }
    else{
        cout << "Invalid index number!!";
    }
    return 0;
}