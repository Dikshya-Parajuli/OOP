/* Write a program in CPP to illustrate the concept of constructor(default, parameterized and copy
constructor) and destructor taking class complex as an example
*/

#include<iostream>
using namespace std;
class complex
{
    float real;
    float imag;
public:
    complex()
    {
        cout<<"Inside Default Constructor"<<endl;
        real=0;
        imag=0;
    }
    complex(float x,float y)
    {
        cout<<"Inside Parameterized Constructor"<<endl;
        real=x;
        imag=y;
    }
    complex(complex &c2)
    {
        cout<<"Inside Copy constructor"<<endl;
        real=c2.real;
        imag=c2.imag;
    }
    ~complex()
    {
        cout<<"Inside of destructor"<<endl;
    }
    void showdata()
    {
        cout<<"The value is : "<<real<<"+"<<imag<<"i"<<endl;
    }

};
int main()
{
    complex c1,c2(1.2,3.33),c3(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}