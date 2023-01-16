/*
Create a class named 'Programming'. While creating an object of the class, if nothing is passed to it,
 then the message "I love programming languages" should be printed. If some String is passed to it, 
 then in place of "programming languages" the name of that String variable should be printed.
For example, while creating the object if we pass "cpp", then "I love cpp" should be printed.
*/

#include<iostream>
#include<string>

using namespace std;

class Programming
{
    string st;
    public:
        
        Programming(string a)
        {
            st="I love "+a;
        }
        Programming()
        {
            st="I Love Programming Languages";
        }
        void display()
        {
            cout<<st<<endl;
        }
};
int main()
{
    Programming a1("abhi");
    Programming a2;
    a1.display();
    a2.display();
    return 0;
}
//