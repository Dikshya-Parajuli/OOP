/*
Write a program in CPP to find the sum of two complex numbers using the OOP concept.
*/


#include<iostream>
using namespace std;
class complex
{
    float real;
    float imag;
public:
    void getdata()
    {
        cout<<"Enter the real and imaginary part of complex no 1 : ";
        cin>>real>>imag;
    }
    void addition(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
    void showdata()
    {
        cout<<"The resulted complex no after addition is : "<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3.addition(c1,c2);
    c3.showdata();
    return 0;
}