/*
Write a program to print the names of students by creating a Student class. 
If no name is passed while creating an object of the Student class, then the name should be "Unknown",
 otherwise the name should be equal to the String value passed while creating the object of the Student class.
*/
#include<iostream>
#include<string>

using namespace std;

class student{
    string name;
    public:
        student(string s){
             name = s;
        }
        student(){
            name = "Unknown";
        }
        void printl(){
            cout<<name<<endl;
        }
};
int main(){
    student a("abhi");
    student b;
    a.printl();
    b.printl();
    return 0;
}