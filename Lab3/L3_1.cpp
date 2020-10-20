//OOP Lab

//Write a program in CPP to overload unary ++ for postfix and prefix increment operation on complex numbers using member function.

#include<iostream>
using namespace std;
class complex
{
    float real;
    float imag;
public:
    void getdata()
    {
        cout<<"Enter a complex number: ";
        cin>>real>>imag;
    }
    complex operator++()//prefix
    {
        complex temp;
        temp.real=++real;
        temp.imag=++imag;
        return temp;
    }
    complex operator++(int)//postfix
    {
        complex temp;
        temp.real=real++;
        temp.imag=imag++;
        return temp;
    }
    void showdata()
    {
        cout<<"The resulted commplex no is : ";
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.getdata();
    c2=++c1;
    c3=c2++;
    c1.showdata();
    c2.showdata();
    c3.showdata();

}