#include <iostream>
using namespace std;
#include <string>

class Student
{
public:
    string name;
    int roll_no;
    string add;
};
int main()
{
    Student John;
    Student Sam;

    John.roll_no = 2;
    John.name = "John";
    John.add = "sdsgsgdsg";
    cout << "roll no. is " << John.roll_no << endl;
    cout << "name is " << John.name << endl;
    cout << "address is " << John.add << endl;

    Sam.roll_no = 3;
    Sam.name = "Sam";
    Sam.add = "dfdfhfdh";
    cout << "roll no. is " << Sam.roll_no << endl;
    cout << "name is " << Sam.name << endl;
    cout << "Address is " << Sam.add << endl;
    return 0;
}
