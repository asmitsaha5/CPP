#include<iostream>
using namespace std;
string getdayofweek(int daynum){
    string dayname;

    switch(daynum){
    case 1:
        dayname = "Sunday";
        break;
    case 2:
        dayname = "Monday";
        break;
    case 3:
        dayname = "Tuesday";
        break;
    case 4:
        dayname = "Wednesday";
        break;
    case 5:
        dayname = "Thrusday";
        break;
    case 6:
        dayname = "Friday";
        break;
    case 7:
        dayname = "Saturday";
        break;
    default:
        dayname = "Invalid day number";
    }
    return dayname;

}


int main()
{
    cout << getdayofweek(1);
    return 0;
}
