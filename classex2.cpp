#include <iostream>
using namespace std;

class Traingle
{
public:
    int a1, b1, c1;
    int function()
    {
        // a1=3;
        // b1=4;
        // c1=5;
        cout << "enter First Value";
        cin >> a1;
        cout << "enter Second Value";
        cin >> b1;
        cin >> c1;
        cout << "Area is = " << a1 + b1 + c1 << endl;
        return 0;
    }
};
int main()
{
    Traingle abhi;
    abhi.function();
    return 0;
}