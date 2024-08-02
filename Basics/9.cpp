#include<iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter the number of elements in array:" << endl;
    cin >> i;
    int arr[i];
    cout << "Enter the " << i << " element" << endl;
    for(int n = 0;n < i;n++)
    {
        cin >> arr[n];
    }
    cout << "Content of the array:" << endl;
    for (int n = 0;n < i;n++)
    {
        cout << arr[n] << " ";
    }
    cout << " " << endl;

}
   