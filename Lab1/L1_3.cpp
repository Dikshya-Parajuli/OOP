//WAP in CPP to find the area of circle and rectangle using the concept of function overloading

#include<iostream>
using namespace std;
int area(int a,int b)
{
    return a*b;
}
float area(float r)
{
    float PI=3.14;
    return PI*r*r;
}
int main()
{
    int l,b;
    float r;
    cout<<"Enter the length and breadth of rectangle"<<endl;
    cin>>l>>b;
    cout<<"Enter the radius of circle"<<endl;
    cin>>r;
    int area_rect=area(l,b);
    float area_circle=area(r);
    cout<<"The area of rectangle is "<<area_rect<<endl;
    cout<<"The area of circle is "<<area_circle<<endl;
    return 0;

}