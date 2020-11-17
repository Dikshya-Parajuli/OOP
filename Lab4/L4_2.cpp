/*
Write a program in CPP to convert the distance in feet and inch entered by the user into distance in meters using
the concept of user defined to basic data conversion
*/

#include<iostream>
using namespace std;
class Distance
{
    float inch;
    float feet;
public:
    void getdata()
    {
        cout<<"Enter the distance in feet and inch"<<endl;
        cin>>feet>>inch;
    }
    operator float()
    {
        float temp=inch/12;
        feet=feet+temp;
        float m=feet/3.2808;
        return m;
    }
};

int main()
{
    Distance d;
    d.getdata();
    float m=d;  
    cout<<"The distance in meter is "<<m;
    return 0;
}