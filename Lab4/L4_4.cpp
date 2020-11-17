/*
WAP in CPP to convert the co-ordinates from Cartesian system to polar system using the concept of
user defined to user defined conversion by writing conversion routine in destination class.
*/

#include<iostream>
#include<cmath>
using namespace std;
class cartesian
{
    float x;
    float y;
public:
    void getdata()
    {
    cout<<"Enter the values of x and y"<<endl;
    cin>>x>>y;
    }
    float returnx()
    {
        return x;
    }
    float returny()
    {
        return y;
    }

};
class polar
{
    float rad,theta;
public:
    polar()
    {
        rad=0.00;
        theta=0.00;
    }
    polar(cartesian cart)
    {
        rad=sqrt(pow(cart.returnx(),2)+pow(cart.returny(),2));
        theta=atan(cart.returny()/cart.returnx());
    }
    void showdata()
    {
        cout<<"The values in polar system ";
        cout<<"("<<rad<<","<<theta<<")";
    }
};
int main()
{
    cartesian c;
    c.getdata();
    polar p;
    p=c;//p.polar(c);
    p.showdata();
    return 0;
}