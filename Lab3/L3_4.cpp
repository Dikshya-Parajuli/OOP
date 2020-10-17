/*
Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using 
non-member/friend function.
*/

#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
public:
    void getdata()
    {
        cout<<"Enter complex number : ";
        cin>>real>>imag;
    }
    void showdata()
    {
        cout<<"The sum is : ";
        cout<<real<<"+"<<imag<<"i";
    }
    friend complex operator +(complex,complex);
};
complex operator +(complex c1,complex c2)
{
    complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showdata();
    return 0;
}