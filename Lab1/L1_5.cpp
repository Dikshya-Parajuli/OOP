//WAP in CPP to illustrate the concept of default arguments

#include<iostream>
using namespace std;
int area_of_cuboid(int l=6,int b=4, int h=2)
{
    return l*b*h;
}
int area_of_rectangle(int l,int b=4)
{
    return l*b;
}
int main()
{
    cout<<"The area of cuboid with default arguments ";
    cout<<area_of_cuboid()<<endl;
    cout<<"The area of cuboid with two of it's value overwritten from left ";
    cout<<area_of_cuboid(4,4)<<endl;
    cout<<"The area of cuboid with all of it's value overwritten ";
    cout<<area_of_cuboid(10,7,3)<<endl;
    cout<<"The area of rectangle with one of it's value as default argument ";
    cout<<area_of_rectangle(9)<<endl;
    cout<<"The area of rectangle with both of it's value overwritten ";
    cout<<area_of_rectangle(6,4)<<endl;
    return 0;
}