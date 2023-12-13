#include <iostream>
using namespace std;
class complex
{
public:
   
    float x; 
    float y; 
    complex()
    {
        x = 0;
        y = 0;
    }
    
    complex operator+(complex);
    complex operator*(complex);
    
    friend istream &operator >>(istream &input, complex &t)
    {
        cout << "Enter the real part" << endl;
        cin >> t.x;
        cout << "Enter the imaginary part" << endl;
        cin >> t.y;
    }
    friend ostream &operator <<(ostream &output, complex &t)
    {
        output << t.x << "+" << t.y << "i\n";
    }
};
complex complex::operator+(complex c)
{
    complex temp;
    temp.x = x + c.x;
    temp.y = y + c.y;
    return (temp);
}
complex complex::operator*(complex c)
{
    complex temp2;
    temp2.x = (x * c.x) - (y * c.y);
    temp2.y = (y * c.y) - (x * c.x);
    return (temp2);
}
int main()
{
    complex c1, c2, c3, c4;
    cout << "Defualt constructor value= ";
    cout<<c1;
    cout << "Enter the 1st number: " << endl;
    cin >> c1;
    cout << "Enter the 2nd number: " << endl;
    cin >> c2;
    c3 = c1 + c2;
    c4 = c1 * c2;
    cout << "The first number is ";
    cout << c1;
    cout << "\nThe second number is ";
    cout << c2;
    cout << "\nAddition is: ";
    cout << c3;
    cout << "\nMultiplication is: ";
    cout << c4;
    return 0;
}
