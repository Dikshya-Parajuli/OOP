/*Write a program in CPP to input the name, roll, marks and address of a student from the user and display the entered details using 
the concept of class and object.
*/


#include<iostream>
using namespace std;
class student{
    char name[20];
    char add[20];
    int roll;
    int mark;
public:
    void getdata()
    {
        cout<<"Enter the name of student ";
        cin>>name;
        cout<<"Enter the address of student ";
        cin>>add;
        cout<<"Enter the roll no of student ";
        cin>>roll;
        cout<<"Enter the marks of student ";
        cin>>mark;
    }

    void showdata()
    {
        cout<<"The details of student"<<endl;
        cout<<"The name of studnt : "<<name<<endl;
        cout<<"The address of student is : "<<add<<endl;
        cout<<"The roll no of student is : "<<roll<<endl;
        cout<<"The mark of a student is : "<<mark;
    }

};

int main()
{
    student s;
    s.getdata();
    s.showdata();
    return 0;
}