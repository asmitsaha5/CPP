#include<iostream>
using namespace std;
class Chef{
    public:
    void makeChicken(){
        cout << "The chef makes yummy chicken" << endl;
    }
    void makeSalad(){
        cout << "The chef makes tasty salad" << endl;
    }
    void makeSpecialdish(){
        cout << "The Chef makes BBQ chicken Ribs" << endl;
    }
};

class Italianchef : public Chef {
    public:
    void makePasta(){
        cout << "The italian chef makes tasty pasta" << endl;
    }
    void makeSpecialdish(){
        cout << "The italian chef makes yummy pizza" << endl;
    }
};

int main()
{
    Chef chef;
    chef.makeSpecialdish();

    Italianchef italianchef;
    italianchef.makeSpecialdish();

    return 0;
}