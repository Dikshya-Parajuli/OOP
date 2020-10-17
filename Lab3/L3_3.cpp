/*
Write a program in CPP to find the sum of two complex numbers using the concept of the overloading binary + operator using member
function.
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
        cout<<"Enter complex number: ";
        cin>>real>>imag;
    }
    complex operator +(complex c)
    {
        complex temp; 
        temp.real=real+c.real; 
        temp.imag=imag+c.imag;
        return temp;
    }
    void showdata()
    {
    cout<<"The sum is : ";
    cout<<real<<"+"<<imag<<"i";
    }
};
int main()
{
    complex c1,c2,c3; 
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    c3.showdata();
    return 0;
}