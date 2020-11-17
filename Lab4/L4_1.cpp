/*
Write a program in CPP to convert the distance in meters entered by the user into distance in feet and
inch using the concept of basic to user defined data conversion.
*/

#include<iostream>
using namespace std;
class Distance
{
    float feet;
    float inch;
public:
    Distance()
    {
        feet=0.00;
        inch=0.00;
    }
    Distance (float m)
    {
        float temp=m*3.2808;
        feet=int(temp);
        inch=(temp-feet)*12;
    }
    void showdata()
    {
        cout<<"feet\t"<<"inch"<<endl;
        cout<<feet<<"\t"<<inch;
    }

};

int main()
{
    Distance d;
    float m;
    cout<<"Enter the distance in meter ";
    cin>>m;
    d=m;     //d.Distance(m)
    d.showdata();
    return 0;
}
