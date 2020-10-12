//WAP in C to add two complex no using the concept of structure

#include<stdio.h>

struct complex{
    int real;
    int imag;
};
int main()
{
    struct complex c1,c2,c3;
    printf("Enter the real and imag part of c1 : ");
    scanf("%d%d",&c1.real,&c1.imag);
    printf("Enter the real and imag part of c2 : ");
    scanf("%d%d",&c2.real,&c2.imag);
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    printf("The result after addition is %d+%di",c3.real,c3.imag);
    return 0;
    
}