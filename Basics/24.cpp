#include<iostream>
using namespace std;
class Student{
    public: 
    string name;
    string major;
    double gpa;
    Student(string aName, string aMajor, double aGpa){
        name = aName;
        major = aMajor;
        gpa = aGpa;
    }
    bool hashonours(){
        if(gpa >=3.5){
            return true;
        }
        return false;
    } 
};
int main(){
    Student student1("Asmit Saha", "CSE", 3.5);
    cout << student1.hashonours();
}