//WAP in CPP to illustrate the concept of inline function

#include<iostream>
using namespace std;
inline void greet_me(char* name,int n)
{
    cout<<"Hello, "<< name <<" How are you?"<<endl;
}
int main()
{
    int n;
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"how many times shall I greet you?"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    greet_me(name,n);
    }
    return 0;
}