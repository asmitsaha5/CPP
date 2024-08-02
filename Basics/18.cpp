#include<iostream>
using namespace std;
int main()
{
    int secretnum = 7;
    int guess;
    int guesscount = 0;
    int guesslimit = 3;
    bool outofguesses = false;

    while(secretnum != guess && !outofguesses){
        if(guesscount < guesslimit){
            cout <<"Enter guess[It's between 1-10 :)] :";
            cin >> guess;
            guesscount++;
        } else {
            outofguesses = true;
        }
    }
    if(outofguesses){
        cout << "You lose!";
    } else{
        cout << "You win!";
    }
    return 0;
}