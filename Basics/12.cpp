#include<iostream>
using namespace std;
int main()
{
    bool ismale = true;
    bool istall = false;
    if(istall && ismale)
    {
        cout << " You are a tall male";
    }
    else if(ismale && !istall)
    {
        cout << "You are a short male";
    }
    else if(!ismale && istall)
    {
        cout << "You are tall but not male";
    }
    else 
    {
        cout << "You are not male and short";
    }
    return 0;
}