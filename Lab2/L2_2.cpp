/*
Write a program in CPP to input the name, roll, marks and address of n students from the user and display the entered details using the 
concept of class and objects.
*/


#include<iostream>
using namespace std;
class student{
    char name[20];
    char add[20];
    int roll;
    int mark;
public:
    void getdata(int i)
    {
        cout<<"Enter the details of student "<<i+1<<endl;
        cout<<"Enter the name of student : ";
        cin>>name;
        cout<<"Enter the address of student : ";
        cin>>add;
        cout<<"Enter the roll of student : ";
        cin>>roll;
        cout<<"Enter the mark of student : ";
        cin>>mark;
    }
    void showdata(int j)
    {
        cout<<"The details of student : "<<j+1<<endl;
        cout<<"The name is : "<<name<<endl;
        cout<<"The address is : "<<add<<endl;
        cout<<"The roll no is: "<<roll<<endl;
        cout<<"The mark is : "<<mark;
    }
};
int main()
{
    student s[100];
    int n;
    cout<<"Enter the no of students : ";
    cin>>n;
    for(int k=0;k<n;k++)
    {
        s[k].getdata(k);
    }
        for(int k=0;k<n;k++)
    {
        s[k].showdata(k);
    }
    return 0;
}