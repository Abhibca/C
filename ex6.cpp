/*
Create a class to print an integer and a character using two functions having the same name but 
different sequence of the integer and the character parameters.
For example, if the parameters of the first function are of the form (int n, char c), 
then that of the second function will be of the form (char c, int n).
*/

#include<iostream>
using namespace std;

class Ex6
{
    int a;
    char b;
public:
    
     Ex6();
    /* Ex6(int n,char c)
     {
         int n =a;
         char c = b;
     }
     Ex6(char c,int a)
     {
         char c = b;
         int n =a;
     }*/
    int display(int n,char c)
    {
        cout<<n<<endl<<c;
    }
    int display(char c,int n)
    {
        cout<<c<<endl<<n;
    }
};
int main()
{
    Ex6::display(1,xh);
    Ex6::display(xh,2);
    return 0;
   
}
