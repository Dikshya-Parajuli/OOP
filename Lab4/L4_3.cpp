/*
WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
user defined to user defined conversion by writing conversion routine in source class.
*/

#include<iostream>
#include<cmath>
using namespace std;
class polar
{
    float rad;
    float theta;
public:
    polar()
    {
        rad=0.00;
        theta=0.00;
    }
    polar(float r,float t)
    {
        rad=r;
        theta=t;
    }
    void showdata()
    {
        cout<<"The co-ordinates in polar form is ";
        cout<<"("<<rad<<","<<theta<<")";
    }
};
class cartesian
{
    float x;
    float y;
public:
    void getdata()
    {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
    operator polar()
    {
        float r,t;
        r=sqrt(pow(x,2)+pow(y,2));
        t=atan(y/x);
        return polar(r,t);
    }
};

int main()
{
    cartesian c;
    c.getdata();
    polar p;
    p=c;    //p=c.operator();
    p.showdata();
    return 0;
}

