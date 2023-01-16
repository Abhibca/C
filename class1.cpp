#include <iostream>
using namespace std;

class employee
{
public:
    int a, b, c;
    void setData(int a1, int b1); //veriable nu declaration karyu 6e
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }

private:
    int d, e;
};
void employee ::setData(int a1, int b1) //scopresolution operator
{
    d = a1;
    e = b1;
}
int main()
{
    employee abhi;
    abhi.a = 33;
    abhi.b = 44;
    abhi.c = 66;
    abhi.setData(3, 4);
    abhi.getData();
    return 0;
}